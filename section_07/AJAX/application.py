from flask import Flask, render_template

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index_01.html")

@app.route("/api")
def api():
    return "I am updated information"