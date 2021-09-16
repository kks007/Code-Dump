LOW = 1
HIGH = 1000

def guess_binary(answer, low, high):
    guesses = 1
    while True:
        guess = low + (high - low) // 2
        
        if guess < answer:
            low = guess + 1
        elif guess > answer:
            high = guess - 1
        elif guess == answer:
            return guesses
    
        guesses += 1

corect_count = 0
max_guesses = 0

for number in range(LOW, HIGH + 1):
    number_of_guesses = guess_binary(number, LOW, HIGH)
    print("{} guessed in {}".format(number, number_of_guesses))

    if number_of_guesses > max_guesses:
        max_guesses, corect_count = number_of_guesses, 1
    elif number_of_guesses == max_guesses:
        corect_count += 1

print("I guessed without being told {} times. Max {} guesses."
        .format(corect_count, max_guesses))

