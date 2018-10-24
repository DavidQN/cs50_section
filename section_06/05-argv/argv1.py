import sys



# This example may seem a little confusing so let’s break this syntax down a little bit.

# sys.argv: represents the command line arguments we pass on to our file, 
# including the file name. So if I ran this file “python argv1.py hello”, 
# this will output an array containing “argv1.py” and “hello” as strings 
# since those were the 2 arguments passed in.

# len(): Is a function that gets the length of an object. 
# The argument may be a sequence 
# (such as a string, bytes, tuple, list, or range) or a collection 
# (such as a dictionary, set, or frozen set).

# range(): 
# range(stop)
# range(start, stop[, step])
# Rather than being a function, range is actually an immutable sequence type
# Meaning that it is similar to a for loop in C, but it doesn’t give the 
# index if you are iterating over an array/list

# So how do we combine all these? 
# 1. Sys.argv will give us an array of the arguments we passed in the command when running this program. 
# If we pass no arguments, it will be an array of [“argv1.py”]
# 2. len(sys.argv) gives us the length of [“argv1.py”] if we passed no arguments so that is a length of 1. 
# 3. range(len(sys.argv)): imagines we are doing a for loop from 0 to 1, 
# since len(sys.argv) gives us 1 in our example so the “I” value will be from 0 to <1. 
# This means our print will have I = 0, and it will print the 0th index of sys.argv, 
# which is in fact [“argv1.py”]


for i in range(len(sys.argv)):
    print(sys.argv[i])
