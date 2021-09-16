import random


# in the docstring we have used backtics, not inverted commas for `int`
# we use backtics to refer to any python keywords

def get_integer(prompt):
    """
    [Get an integer form stdin]

    The function will continue looping, and prompting the user, until
    a valid `int` is entered. 

    Args:
        prompt: The string that the user will see, when they are prompted to enter the value. 

    Returns:
        The integer the user entered
    """
    while True:
        temp = input(prompt)
        if temp.isnumeric():
            return int(temp)
        # else: 
        #     print("{0} is not a valid number".format(temp))
        print("{0} is not a valid number".format(temp))

print(input.__doc__)
print("*" * 80)
print(get_integer.__doc__)
print("*" * 80)

highest = 1000
answer = random.randint(1, highest)
print(answer)   # TODO: Remove after testing
guess = 0 # initialise to any number that doesn't equal the answer
print("Please guess number between 1 and {}: ".format(highest))

while guess != answer:
    guess = get_integer(": ")

    if guess == 0:
        break
    if guess == answer:
        print("Well done, you guessed it")
        break
    else:
        if guess < answer:
            print("Please guess higher")
        else:   # guess must be greater than answer
            print("Please guess lower")
       
