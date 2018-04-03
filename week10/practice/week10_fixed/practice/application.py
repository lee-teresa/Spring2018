from flask import Flask, render_template
app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/abstract_index")
def abstract():
    return render_template("abstract_index.html")

@app.route("/log")
def log():
    return render_template("log.html")

@app.route("/objects")
def objects():
    return render_template("objects.html")

@app.route("/button")
def button():
    return render_template("button.html")

@app.route("/button2")
def button2():
    return render_template("button2.html")

@app.route("/form")
def form():
    return render_template("form.html")

@app.route("/form2")
def form2():
    return render_template("form2.html")