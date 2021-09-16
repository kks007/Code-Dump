user_input = input("Please enter 3 numbers separated by commmas: ")

string = user_input.split(",")

ints = []

for index in string:
    ints.append(int(index))

result = ints[0] + ints[1] - ints[2]

print(result)
