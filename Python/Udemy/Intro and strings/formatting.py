for i in range (1,13):
    print("No. {0:2} squared in {1:3} and cubed is {2:4}"
    .format(i, i**2, i**3))

#the numbers after the colon describe field width above

#left align:

for i in range (1,13):
    print("No. {0:2} squared in {1:<3} and cubed is {2:<4}"
    .format(i, i**2, i**3))

#centre align:
for i in range (1,13):
    print("No. {0:2} squared in {1:^3} and cubed is {2:^4}"
    .format(i, i**2, i**3))

print("Pi is approximately {0:12}".format(22/7))
print("Pi is approximately {0:12f}".format(22/7))
print("Pi is approximately {0:12.50f}".format(22/7))
print("Pi is approximately {0:52.50f}".format(22/7))
print("Pi is approximately {0:62.50f}".format(22/7))
print("Pi is approximately {0:72.50f}".format(22/7))
print("Pi is approximately {0:<72.54f}".format(22/7))

for i in range (1,13):
    print("No. {} squared in {} and cubed is {:4}"
    .format(i, i**2, i**3))

