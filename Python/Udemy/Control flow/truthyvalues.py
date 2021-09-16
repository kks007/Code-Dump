if 0:
    print("True")
else:
    print("False")

name = input("Please enter your name: ")

if name:  #empty values are seen as false
    print("Hello, {}".format(name))
else: 
    print("Are you unnamed?")
