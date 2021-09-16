class Person:
    def __init__(self, name) -> None:
        self.name = name

    def talk(self):
        print("Hey, are you {}".format(self.name))
    
    
john = Person("tony stank")
print(john.name)
john.talk()

