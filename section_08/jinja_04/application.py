from flask import Flask, render_template

# Create an instance of Flask 
app = Flask(__name__)

# Create root route and render html template in templates folder
# and pass in a Dictionary
@app.route("/")
def index():
    data = {
        "name": 'bob',
        "hair": 'brown',
        "device": 'iphone'
    }

    return render_template("index.html", data=data)


@app.route("/display")
def display():
    data = {
        "names": ['bob', 'sagat', 'vince', 'carl'],
        "hair_colors": ['brown', 'black', 'blonde', 'blue', 'green'],
        "devices": ['iphone', 'android']
    }

    return render_template("display.html", data=data)


@app.route("/display2")
def display2():
    data = {
        "names": ['bob', 'sagat', 'vince', 'carl'],
        "hair_colors": ['brown', 'black', 'blonde', 'blue', 'green'],
        "devices": ['iphone', 'android']
    }

    return render_template("display2.html", data=data)