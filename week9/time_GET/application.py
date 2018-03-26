from flask import Flask

app = Flask(__name__)

@app.route("/show/<number>")
def show(number):
	return f"You passed in {number}."