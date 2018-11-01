# Decorator
#
# The function we are calling is called "one()" but it's not returning 1,
# but rather returning 2, that's strange right?
# So what might be the reason?
#
# If we take a step back, we see this new syntax with the @ symbol with a name after it.
# So what this is called, is a decorator. We can notice that the name after the @ symbol is actually
# used above, but now as a function. hmmmmmm
# This new function also is taking a parameter called "func" but we never passed this "override()" function any
# arguments right? hmmmmmmm
# 
# Alright, enough with the "hmmmm", let's get down to business. 
# When we call a function with the @ symbol above it, in this case the function "one()", 
# what is really happening is that we are instead calling a function with the name beside the @ symbol,
# in our case "override()"
# Okay, so what is the argument "func"? 
# Well, that's simple (no it's not!) it's the function we thought we called, "one()". 
# Our function "one()" is being passed as an argument to the function "override()". 
# When this happens, it works just like any argument, it's still a function that isn't being used yet.
# We now have another function inside our "override()" function and it is returning our "func()" and adding 1
# to it. Now, the "incr()" function is using our function "one()" and adding 1 to it. 
# We then return the function "incr()". So when we use the "one()" function we are actually instead using the
# incr() function, since that is what we are returning in the "override()" function. 
#
# This can be a little confusing to understand on a first pass, but I recommend to try playing around
# with this implementation. :)  

def override(func):
    def incr():
        return func() + 1
    return incr

@override
def one():
    return 1


print(one())