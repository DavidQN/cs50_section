from flask import Flask, render_template, jsonify, request, session, redirect, url_for
from helpers import login_required

app = Flask(__name__)

# Each session is built ontop of cookies and signs it cryptographically
# Allows the user to view it but not modify it
# http://flask.pocoo.org/docs/1.0/quickstart/#sessions
app.secret_key = "_5#y2L"

# List of users used to login
valid_users = {'tom', 'bill' }

valid_user_passwords = {
    "tom": "123",
    "bill": "123",
    "a": "a"
}

@app.route("/")
@login_required
def index():
    """ Home page """

    return f"Logged in as {session['user_id']}"

@app.route("/login", methods=["GET", "POST"])
def login():
    """ Log user in """
    
    if request.method == "POST":
        print("login entered POST", request.form.get("username"))
        # Set current user to exist in session
        session["user_id"] = request.form.get("username")
        # Redirect them to index page in which is restricted to valid users
        return redirect(url_for('index'))
    else:
        session.clear()
        print("login entered GET")
        return render_template("login.html")

@app.route("/check", methods=["POST"])
def check():
    """ Check if username is within valid_users
    
    Return string "true" or "false" (because of jsonify) to login.html before form submission
    """
    
    username = request.form.get('username')
    password = request.form.get('password')

    # Check both username and password associate with username
    if username in valid_users and password in valid_user_passwords[username]:
        # Is valid user
        return jsonify(True)

    # If user doesn't exist in valid_users and valid_user_passwords
    return jsonify(False)

@app.route("/logout")
def logout():
    """ Log user out """

    session.clear()
    return redirect(url_for("index"))


@app.route("/register", methods=["GET","POST"])
def register():
    """ Register user """

    if request.method == "GET":
        return render_template("register.html")
    
    # no need for an else
    username = request.form.get('username')
    password = request.form.get('password')

    # add user to valid_users set
    valid_users.add(username)

    # add new username and password
    valid_user_passwords[username] = password

    return redirect(url_for("index"))


@app.route("/validate_register", methods=["POST"])
def validate_register():
    """ Check if user exists before routing to /register """

    username = request.form.get('username')

    # If username exists, decline registration
    if username in valid_users:
        return jsonify(False)
    
    # Username doesn't exist
    return jsonify(True)

@app.route("/users")
def users():
    """ Log available users for debug purposes """
    return render_template("users.html", valid_users=valid_users)