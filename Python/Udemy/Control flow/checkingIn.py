parrot = "Norwegin Blue"

letter = input("Enter a character: ")

if letter in parrot:
    print("{} is in {}".format(letter, parrot))
else:
    print("I don't need that letter")

print("-" * 50)

if letter in parrot.casefold():
    print("{} is in {}".format(letter, parrot))
else:
    print("I don't need that letter")

