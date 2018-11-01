from flask import Flask

app = Flask(__name__)

@app.route("/")
def index():
    return "You are on application_02 right now!"

@app.route("/show/<number>")
def show(number):
    return f"You passed in a {number}"

@app.route("/demo/<int:param>")
def show_two(param):
    return f"You passed in a {param}"


@app.route("/pasta/<string:cheese>")
def show_cheese(cheese):
    return f"You passed in a {cheese}"
