# flask is the framework here, while Flask is a Python class datatype. In other words, Flask is 
# the prototype used to create instances of web application or web applications if you want to put it simple.
# Essentially we are retrieving a class by the name of Flask from the library "flask". This class like
# many other classes we have used before, comes with quite a lot of extra functionality, in our case
# the ability to spin up an easy to use web application
from flask import Flask

# So, once we import Flask, we need to create an instance of the Flask class for our web app. 
# That’s what line below does. __name__ is a special variable that gets as value 
# the string "__main__" when you’re executing the script. 
app = Flask(__name__)

# We are defining a function that returns the string "You are at index". This function is mapped
# to the home "/" URL. That means when the user navigates to (in most cases) localhost:5000, the
# "index" function will run and it will return its output on the webpage. 
@app.route("/")
def index():
    return "You are at the index!"