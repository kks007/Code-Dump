menu = [["egg", "bacon"],
        ["eggs", "sausage", "bacon"],
        ["egg", "spam"],
        ["egg", "bacon", "spam"],
        ["egg", "tomato", "spam"],
        ["egg", "tomato", "spam", "bacon"],
        ["egg", "tomato", "bacon", "hotsauce"]]


for meal in menu:
    for index in range(len(meal) - 1, -1, -1):
        if meal[index] == "spam":
            del meal[index]
    print(", ".join(meal))

