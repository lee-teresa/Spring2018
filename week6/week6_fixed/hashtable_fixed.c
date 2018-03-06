
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdbool.h>
#include <cs50.h>

#define LENGTH 45

static int hash_word(const char* word);
bool check(const char* word);
bool load(const char* list);
bool unload(void);

typedef struct node
{
    char word[LENGTH + 1];
    struct node* next;
}
node;

// number of buckets in our hash table
#define NUM_BUCKETS 15500

// global list hash table
node* hashtable[NUM_BUCKETS];

int main(int argc, char* argv[])
{
    // check for correct number of args
    if (argc != 2)
    {
        printf("Usage: hashtable text\n");
        return 1;
    }

    bool loaded = load(argv[1]);

    if(!loaded)
    {
        printf("loading failed\n");
        return 1;
    }

    // get a word from user and check if it's in the list
    printf("give me a word\n");
    char *search_word = get_string();

    bool found = check(search_word);
    if(found)
    {
        printf("found it!\n");
    }
    else
    {
        printf("not in the list\n");
    }

    unload();

}

/**
 * Returns a hash value for word, in the range [0, NUM_BUCKETS - 1]
 * Lowercases characters before hashing to be case-insensitive
 * Hash function adapted from:
 *     http://stackoverflow.com/questions/98153/#98179
 */
static int hash_word(const char* word)
{
    /* magic numbers from http://www.isthe.com/chongo/tech/comp/fnv/ */
    size_t InitialFNV = 2166136261U;
    size_t FNVMultiple = 16777619;

    /* Fowler / Noll / Vo (FNV) Hash */
    size_t hash = InitialFNV;
    for (int i = 0; word[i] != '\0'; i++)
    {
        // xor the low 8 bits of the hash
        hash ^= (tolower(word[i]));

        // multply by the magic number
        hash *= FNVMultiple;
    }
    return (hash % NUM_BUCKETS);
}

/**
 * Returns true if word is in list else false.
 */
bool check(const char* word)
{
    // find the bucket in the table where the word should be
    node* bucket = hashtable[hash_word(word)];

    // look at all entries in the bucket to see if the word's there
    for (node* entry = bucket; entry != NULL; entry = entry->next)
    {
        // use strcasecmp since words in list are in lowercase
        if (strcasecmp(entry->word, word) == 0)
        {
            return true;
        }
    }
    return false;
}

/**
 * Loads list into memory.  Returns true if successful else false.
 */
bool load(const char* list)
{
    FILE* list_file = fopen(list, "r");
    if (list_file == NULL)
    {
        return false;
    }

    // loop through file, entering each word in our hash table
    while (true)
    {
        // build a node to store the word we're about to read
        // if out of memory, then punt (clean up first though!)
        node* entry = malloc(sizeof(node));
        if (entry == NULL)
        {
            unload();
            fclose(list_file);
            return false;
        }

        // attempt to read a word from the list
        // if we fail, we're either at the end of the file or we erred
        if (fscanf(list_file, "%45s", entry->word) != 1)
        {
            free(entry);
            break;
        }

        unsigned int hash = hash_word(entry->word);

        // prepend the entry to the bucket
        entry->next = hashtable[hash];
        hashtable[hash] = entry;

    }

    // fail if we encountered errors in reading
    if (ferror(list_file))
    {
        unload();
        fclose(list_file);
        return false;
    }

    fclose(list_file);
    return true;
}

bool unload(void)
{
    // loop through each hash table bucket
    for (int i = 0; i < NUM_BUCKETS; i++)
    {
        // free all the nodes for words with this hash value
        node* entry = hashtable[i];
        while (entry != NULL)
        {
            // make sure to save the next pointer prior to freeing!
            node* next = entry->next;
            free(entry);
            entry = next;
        }
    }

    return true;
}