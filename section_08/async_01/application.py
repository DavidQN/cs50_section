from flask import Flask, render_template, jsonify, request

app = Flask(__name__)

# List of users kept in a set
valid_users = {'tom', 'bill' }

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/api", methods=["POST"])
def api():
    # print("backend grab form", request.form)
    # print("backend grab form per: ", request.form.get('username'), request.form.get('password'))

    username = request.form.get('username')
    password = request.form.get('password')

    
    if username in valid_users:
        print("username already exists!")
        return jsonify(False) 

    # If it doesn't exist in the set
    valid_users.add(username)
    return jsonify(f"Username {username} added!")