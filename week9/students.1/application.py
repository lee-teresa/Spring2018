from cs50 import SQL
from flask import Flask, render_template, request
app = Flask(__name__)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///student.db")


@app.route("/", methods=["GET", "POST"])
def mult_table():
	if request.method == "GET":
		return render_template("form.html")

	elif request.method == "POST":
	    # TODO: Display requested student info

@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user for an account."""

    # POST
    if request.method == "POST":
        # TODO: Add user to database

    # GET
    else:
        return render_template("register.html")
