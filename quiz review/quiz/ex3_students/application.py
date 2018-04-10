from cs50 import SQL
from flask import Flask, render_template, request, redirect
app = Flask(__name__)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///student.db")

@app.route("/", methods=["GET", "POST"])
def search():
	if request.method == "GET":
		return render_template("form.html")

	elif request.method == "POST":
		students = db.execute("SELECT * FROM Students WHERE name = :name", name=request.form.get("name"))
		return render_template("table.html", students = students)

@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user for an account."""

    # POST
    if request.method == "POST":
        # Add user to database
        id = db.execute("INSERT INTO Students (name, dorm) VALUES(:name, :dorm)",
                        name=request.form.get("name"),
                        dorm=request.form.get("dorm"))

        return redirect("/")
    # GET
    else:
        return render_template("register.html")
