menu = [["egg", "bacon"],
        ["eggs", "sausage", "bacon"],
        ["egg", "spam"],
        ["egg", "bacon", "spam"],
        ["egg", "tomato", "spam"],
        ["egg", "tomato", "spam", "bacon"]]


# for meal in menu:
#     for item in meal:
#         if item != "spam":
#             print(item, end = ", ")

#     print()

for meal in menu:
    items = ", ".join((item for item in meal if item != "spam"))
    print(items)

