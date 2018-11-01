from flask import Flask, request, render_template
from datetime import datetime 
from pytz import timezone

app = Flask(__name__)

@app.route("/")
def time():
    now = datetime.now(timezone('America/New_York'))
    return render_template("index_05.html", now=now)
