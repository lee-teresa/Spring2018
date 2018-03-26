from flask import Flask, render_template, request
app = Flask(__name__)

@app.route("/")
def mult_table():
	return render_template("form.html")

	# TODO:
	# User reached route via GET (as by clicking a link or via redirect)
	# render template form.html


	# TODO:
	# User reached route via POST (as by submitting a form via POST)
	# render template table.html and pass the dimension provided by user as
	# a variable called dim
