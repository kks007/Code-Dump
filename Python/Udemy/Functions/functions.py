def multiply(x, y):
    """Multiply 2 numbers.

    Although this function is intended to multiply 2 numbers,
    you can also use it to multiply a sequence.  If you pass
    a string, for example, as the first argument, you'll get
    the string repeated `y` times as the returned value.
    
    Args:
        x: The first number to multiply.
        y: The number to multiply `x` by.

    Returns:
        The product of `x` and `y`.
    """
    result = x * y
    return result # if you remove this, the function will return "None"


def is_palindrome(string:str) -> bool:
    """Check if a string is a palindrome.

    Args:
        string: The string to check.

    Returns:
        True if `string` is a palindrome, False otherwise.

    """
    # backwards = string[::-1]
    # return backwards == string
    return string[::-1].casefold() == string.casefold()


def palindrome_sentence(sentence: str) -> bool:
    """Check if a sentence is a palindrome.

    The function ignores whitespace, capitalisation and
    punctuation in the sentence.

    Args:
        `sentence`: The sentence to check.

    Returns:
        True if `sentence` is a palindrome, False otherwise.
    """
    string = ""
    for char in sentence:
        if char.isalnum():
            string += char
    # return string[::-1].casefold() == string.casefold()
    return is_palindrome(string)


def fibonacci(n: int) -> int:
    """ Return the `n` th fibonacci number, for positive `n`"""
    if 0 <= n <= 1:
        return n
    n_minus1, n_minus2 = 1, 0

    result = None

    for f in range(n - 1):
        result = n_minus1 + n_minus2
        n_minus2 = n_minus1
        n_minus1 = result
    
    return result


# word = input("Please enter a word to check: ")

# if palindrome_sentence((word)):
#     print("'{}' is a palindrome".format(word))
# else:
#     print("'{}' is not a palindrome".format(word))

for i in range(36):
    print(i, fibonacci(i))

p = palindrome_sentence()

