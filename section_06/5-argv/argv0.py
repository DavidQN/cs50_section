import sys

# To grab a users argument from the command line when running the program, 
# you must import “sys” which gives you access to Pythons system library, 
# which has the method “argv” that works exactly as how the C’s “argv” works 
# in the main function of a C program when passed in as an argument.
if len(sys.argv) == 2:
    print("hello, {}".format(sys.argv[1]))
else:
    print("hello, world")
