x, y, z  = 1, 2, 37  #tuple
 
print(x,y,z)

print("Unpacking a tuple") 

data = 1, 2, 37 #tuple
x,y,z = data

print(x,y,z)

print("Unpacking a list")

data_list = [12, 13, 14]
# data_list.append(15) ## t!this will give error, cause lists are mutable
# this code won't crash if it was tuple cause they can't be changed

p, q, r = data_list
print(p, q, r)

