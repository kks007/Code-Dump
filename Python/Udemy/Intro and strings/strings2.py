parrot = "Norwegian Blue"

# negative index value is obtained by
# subtracting positive value from length

print(parrot[0:6])
print(parrot[4:7])
print(parrot[10:])  # form
print(parrot[:10])  # till

print(parrot[:6] + parrot[6:])

print(parrot[:])
print(parrot[-14: -8])

number = "9,223;372:036 854,775;807"
seperators = number[1::4]
print(seperators)

values = "".join(char if char not in seperators else " " for char in number).split()
print([int(val) for val in values])
