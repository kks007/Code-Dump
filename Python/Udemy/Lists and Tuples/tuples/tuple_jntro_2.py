# this is a list of tuples
albums = [("Welcome to my nightmare", "Alice Cooper", 1975),
          ("Bad Company", "Bad Company", 1974),
          ("Nightflight", "Budgie", 1981),
          ("More Mayhem", "Emilda May", 2011),
          ("Ride the Lightning", "Metallica", 1984),
          ] 
          
print(len(albums))

#for album in albums:
for name, artist, year in albums:
    print("Album: {}, Artists: {}, Year: {}"
          .format(name, artist, year))
        # .format(album[0], album[1], album[2]))

