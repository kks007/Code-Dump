shopping_list = ["milk", "pasta", "eggs", "spam", "bread", "rice"]

#for item in shopping_list:
#    if item != "spam":
#        print("Buy " + item)

for item in shopping_list:
    if item == "spam":
        continue

    print("Buy "+ item) #this indent isn't controlled by the if statement, it's  on the same level

