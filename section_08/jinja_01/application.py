# Import Flask class from flask module
# Import render_template, which allows us to render .html files in the 'templates' folder
#   which essentially is a jinja2 template and has features that regular HTML doesn't have
from flask import Flask, render_template

# Create an instance of Flask 
app = Flask(__name__)

# Create root route and render html template in templates folder
@app.route("/")
def index():
    return render_template("index.html")