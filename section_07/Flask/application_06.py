from flask import Flask, request, render_template
from datetime import datetime 
from pytz import timezone

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index_06.html")
