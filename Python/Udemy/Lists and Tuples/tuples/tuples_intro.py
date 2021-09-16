# Tuples are immutable

welcome = "Welcome to my nightmare", "Alice Cooper", 1975     
bad = "Bad Company", "Bad Company", 1974                            
budgie = "Nightflight", "Budgie", 1981                           
imelda = "More Mayhem", "Emilda May", 2011                            
metallica = "Ride the Lightning", "Metallica", 1984                   

# print(metallica[0])
# print(metallica[1])
# print(metallica[2])

# metallica = "Master of puppets" 
# can't be done cause tuples are immutable

#unpacking::--->>

title, artist, year = metallica
print(title)
print(artist)
print(year)

table = ("Coffe table", 200, 100, 75, 34.50)
print(table[1] * table[2])

name, length, width, height, price = table # unpacking into variables
print(length * width)
