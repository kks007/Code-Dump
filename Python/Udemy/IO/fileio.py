jabber = open("E:\\Git\\Code-Dump\\Python\\Udemy\\IO\\sample.txt", 'r')

## using double slashes is better

for line in jabber:
    print(line, end='')


jabber.close

