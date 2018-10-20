import cs50


# In python the logical “||” OR that is used in C, is actually referred to as “or” in python. 
# Makes more sense, and also more readable. 
c = cs50.get_char()
if c == "Y" or c == "y":
    print("yes")
elif c == "N" or c == "n":
    print("no")
else:
    print("error")
