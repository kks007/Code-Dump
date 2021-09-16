age = 24

print("My age is " + str(age) + " years")

# better way in python 3
print("My age is {0}".format(age))

# {0} is a replacement field

print("There are {0} days in {1}, {2}, {3}, {4} and {5}"
      .format(31, "Jan", "Mar", "May", "Jul", "Aug"))

print("Jan: {2}, Feb: {0}, Mar: {2}, Apr: {1}, May: {2}, Jun: {1}"
      .format(28, 30, 31))

