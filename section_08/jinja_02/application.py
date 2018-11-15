from flask import Flask, render_template

# Create an instance of Flask 
app = Flask(__name__)

# Create root route and render html template in templates folder
# and pass in a variable
@app.route("/")
def index():
    someinfo = "Hey I am a string and I was passing into this template from application.py"

    # When we pass variables to the templates through Jinja2, the left hand side is the variable name
    # that will exist on the Jinja2 template, and the right hand side the variable from this file that
    # we are passing.
    # We can call the left hand side of the assisgnment variable anything we want, but that would essentially 
    # be the name of the variable getting passed into Jinja2. By convention it's best to have both to have the
    # same name
    return render_template("index.html", someinfo=someinfo)