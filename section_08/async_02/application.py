from flask import Flask, render_template, jsonify, request, session, redirect, url_for

app = Flask(__name__)

# Each session is built ontop of cookies and signs it cryptographically
# Allows the user to view it but not modify it
# http://flask.pocoo.org/docs/1.0/quickstart/#sessions
app.secret_key = "_5#y2L"

# List of users used to login
valid_users = {'tom', 'bill' }

@app.route("/")
def index():
    """ Home page
    
    Tells user if they are logged in or not
    """
    # Check if user exists in session, if so give them access
    if 'username' in session:
        return f"Logged in as {session['username']}"
    else: 
        # Forget any user saved in session
        session.clear()
        return "You are not logged in"

@app.route("/login", methods=["GET", "POST"])
def login():
    """ Log in user
    
    User get's logged in after form submission only is "/check" is valid
    """
    if request.method == "POST":
        print("login entered POST", request.form.get("username"))
        # Set current user to exist in session
        session["username"] = request.form.get("username")
        # Redirect them to index page in which is restricted to valid users
        return redirect(url_for('index'))
    else:
        print("login entered GET")
        return render_template("login.html")

@app.route("/check", methods=["POST"])
def check():
    """ Check if username is within valid_users
    
    Return string "true" or "false" (because of jsonify) to login.html before form submission
    """
    username = request.form.get('username')
    password = request.form.get('password')

    
    if username in valid_users:
        # Is valid user
        return jsonify(True) 

    # If user doesn't exist in valid_users
    return jsonify(False)