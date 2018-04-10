from cs50 import SQL
from flask import Flask, render_template, request, redirect
app = Flask(__name__)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///student.db")


@app.route("/", methods=["GET", "POST"])
def search():
	if request.method == "GET":
		return render_template("form.html")

    # TODO: search student by name and display name & dorm in table.html
	elif request.method == "POST":


@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user for an account."""

    # POST
    if request.method == "POST":
        # TODO: Add user to database

        return redirect("/")
    # GET
    else:
        return render_template("register.html")