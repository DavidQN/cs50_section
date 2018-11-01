
def wrapper(func):
    def runtime():
        print("About to run the function...")
        func()
        print("Done running the function.")

    return runtime


@wrapper
def hello():
    print("Hello, world!")


hello()