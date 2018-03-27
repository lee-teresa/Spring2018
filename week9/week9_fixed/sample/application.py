from flask import Flask

app = Flask(__name__)

@app.route("/")
def index():
    return "You are at the index!"

#display "You have reached the sample page!" when user visits /sample
@app.route("/sample")
def sample():
    return "sample!"