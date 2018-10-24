import cs50


# The syntax for python doesn’t require there to be () parenthesis around our if statements. 
# The statements also rather than use bracket notation to wrap the code that will be run, 
# we instead prefer to use indentation. Python checks the block of code after a conditional 
# after an indentation to know which code to run. 
i = cs50.get_int()
if i < 0:
    print("negative")
elif i > 0:
    print("positive")
else:
    print("zero")
