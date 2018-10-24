class Dog():
    def __init__(self, name, age, fluff):
        self.name = name 
        self.age = age
        self.fluff = fluff

    def bark(self):
        print("ruff")

    def getName(self):
        print(self.name)

    def getAge(self):
        print(self.age)

    def getFluff(self):
        print(self.fluff)


dog = Dog("larry", 3, "max")
print(dog)

dog.getName()
dog.getAge()
dog.getFluff()
