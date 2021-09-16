data = [4, 5, 104, 105, 110 , 120 , 130, 130, 150, 160, 170, 
        183 , 187, 188, 190, 191, 350, 360]

# del data[0:2]
# print(data)
# del data[13:]
# print(data)

min_valid = 100
max_valid = 200

# process the low values in the list

stop = 0
for index, value in enumerate(data):
    if value >= min_valid:
        stop = index
        break

print(stop)
del data[:stop]
print(data)

# process the high values in the list

start = 0
for index in range(len(data)-1, -1, -1):
    if data[index] <= max_valid: 
        start = index + 1 
        break
        # we have the index of the last item to keep.
        # set "start" to the position of the first item to delete,
        # which is one after the index

print(start)
del data[start:]
print(data)

