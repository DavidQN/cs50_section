import cs50

s = cs50.get_string()

# This one way to format strings in python, when you are passing in a variable.
# You place an f before the string to indicate your are going to 
# “format” this string and a {VARIABLE_NAME} for where the variable name will exist
print(f"hello, {s}")
