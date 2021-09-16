import random

highest = 10
tries = 0
answer = random.randint(1, highest)
print(answer)  #TODO: Remove after testing

print("Please guess a number between 1 and {}: ".format(highest))

while tries <= 4:  
    if tries == 4:
        print("Sorry, you lost")
        break
    guess = int(input())
    if guess == 0:
        print("Thank you for playing")
        break
    elif tries == 0 and guess == answer:
        print("You got it the first time!")
    elif guess == answer: 
        print("You got it")
    elif guess < answer:
        print("Please guess higher")
    else: 
        print("Please guess lower")
    tries += 1
 
