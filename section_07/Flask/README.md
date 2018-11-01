## Essentials

Just remember that before running a flask application you should always set what your global variable `FLASK_APP` is so you are correctly running the correct flask application when writing `flask run`.

Example:
Say I have an application called `application.py`, to even run this application I need to first setup what my global variable `FLASK_APP` is:

```shell
export FLASK_APP=application.py
flask run
```

That should safetly run the program `application.py`
