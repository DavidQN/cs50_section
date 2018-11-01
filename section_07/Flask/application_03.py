from flask import Flask, request

app = Flask(__name__)

@app.route("/")
def index():
    return "You are on application_03 right now!"

@app.route("/login", methods=['GET', 'POST'])
def login():
    if request.method == "GET":
        # return "I am a get!"
        return """
            <form action="/login" method="post">
            <input name="demo" type="number" placeholder="type a number"/>
            <input name="submit" type="submit">
            </form>
         """
    else:
        return "I must be a POST!!!!"