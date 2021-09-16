menu = [["egg", "bacon"],
        ["eggs", "sausage", "bacon"],
        ["egg", "spam"],
        ["egg", "bacon", "spam"],
        ["egg", "tomato", "spam"],
        ["egg", "tomato", "spam", "bacon"]]

for meal in menu:
    if "spam" not in meal:
        print(meal)

        for item in meal:
            print(item)

    else:
        print("{0} has a spam score of {1}"
                .format(meal, meal.count("spam")))


