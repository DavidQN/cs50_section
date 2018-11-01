from flask import Flask, request
from datetime import datetime 
from pytz import timezone

app = Flask(__name__)

@app.route("/")
def time():
    now = datetime.now(timezone('America/New_York'))
    return f"the current date and time is {now}"
