def fizz_buzz(number: int) -> str:
    """
    Play Fizz buzz
 
    :param number: The number to check.
    :return: 'fizz' if the number is divisible by 3.
        'buzz' if it's divisible by 5.
        'fizz buzz' if it's divisible by both 3 and 5.
        The number, as a string, otherwise.
    """
    if number % 15 == 0:
        return "fizz buzz"
    elif number % 3 == 0:
        return "fizz"
    elif number % 5 == 0:
        return "buzz"
    else:
        return str(number)
 
input("Play Fizz Buzz, press ENTER to start.")
print()

next_number = 0
while next_number < 99:
    next_number += 1
    print(fizz_buzz(next_number))
    next_number += 1
    correct_answer = fizz_buzz(next_number)
    player_answer = input("your chance: ")
    # player_answer = correct_answer #use to check/cheat
    if player_answer != correct_answer:
        print("You lose, the correct and correct answer was {}"
            .format(correct_answer))
        break
    else:
        print("Well Done, you reached {}".format(next_number))


