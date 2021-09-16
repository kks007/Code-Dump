panagram = "The quick brown fox jumps over he lazy dog"

words = panagram.split()
print(words)

numbers = "9, 223, 372, 036, 854, 775, 807"
print(numbers.split(", "))

generatd_list = ['9', ' ',
                '2', '2', '3', ' ',
                '3', '7', '2', ' ',
                '0', '3', '6', ' ',
                '8', '5', '4', ' ',
                '7', '7', '5', ' ',
                '8', '0', '7', ' ']

values = "".join(generatd_list)
print(values)

values_list = values.split()
print(values_list)

# option 1 to replace the values in place

for index in range(len(values_list)):
    values_list[index] = int(values_list[index])

print(values_list)

#method 2 : by crearing a new list

integer_values = []
for value in values_list:
    integer_values.append(int(value))

print(integer_values)
