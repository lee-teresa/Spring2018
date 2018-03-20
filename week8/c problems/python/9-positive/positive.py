import cs50



def get_positive_int():
    while True:
        print("n is ", end="")
        n = cs50.get_int()
        if n > 0:
            break
    return n

i = get_positive_int()
print("{} is a positive integer".format(i))