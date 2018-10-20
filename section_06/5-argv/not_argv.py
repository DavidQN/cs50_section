x = ["hello", "world"]

# This program prints every character in this array of strings. 
# It does it by first iterating over each element in the array, 
# which is “hello” and “world”. The second for loop iterates of each of these strings, 
# so we can imagine it is printing out each character. 
# The last print statement that does nothing, is actually printing a newline. 
# This is because python’s print statement always prints a new line. 
# 
# If you don’t want a print statement in python to not print a new line, 
# then you must indicate it in your print statement such as print(end=“”), 
# where end indicates if you are will use a new line after the print statement ends.
for s in x:
  for c in s:
    print(c)
  print()
