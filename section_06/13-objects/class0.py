class Dog():
    def bark(self):
        print("ruff")

    def getName(self):
        print(self.name)


dog = Dog()
print(dog)

dog.name = "larry"
dog.age = 3
dog.fluff = "max"

dog.getName()