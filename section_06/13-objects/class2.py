
# Even though this _list variable is a data type of "list", it is also an object under the hood
# How do we know?  
# Well remember we used the “.append()” function to attach an element on to this list. 
# This “.append()” function is actually referred to as a method since it is a function attributed 
# to that object. It allows us to get functionality that is specific to pythons List object
_list = [1,2,3,4]
print(_list)

_list.append(14)
print(_list)

