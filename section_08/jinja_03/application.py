from flask import Flask, render_template

# Create an instance of Flask 
app = Flask(__name__)

# Create root route and render html template in templates folder
# and pass in an array
@app.route("/")
def index():
    data = ["person1", "person2", "person3", "person4"]

    # Pass in an array to the client and let the Jinja2 handle how it wants to be displayed
    # Check index.html to see how to loop in Jinja2
    return render_template("index.html", data=data)