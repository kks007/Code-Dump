import colorama # to make it work on windows

# Some ANSI escape sequences for colours and effects
BLACK = '\u001b[30m'
RED = '\u001b[31m'
GREEN = '\u001b[32m'
YELLOW = '\u001b[33m'
BLUE = '\u001b[34m'
MAGENTA = '\u001b[35m'
CYAN = '\u001b[36m'
WHITE = '\u001b[37m'
RESET = '\u001b[0m'

BOLD = '\u001b[1m'

UNDERLINE = '\u001b[4m'
REVERSE = '\u001b[7m'


def colour_print(text: str, *effects: str) -> None:
    """
    Print `text` using ANSI sequences to change colour, etc

    Args:
        text (str): The text to print
        effects (str): The effect we want
    """
    effect_string = "".join(effects)
    output_string = "{0}{1}{2}".format(effect_string, text, RESET)
    print(output_string)


colorama.init()

colour_print("Red", RED)
colour_print("Red in bold", RED, BOLD)
print("This should be the default colour")
colour_print("Blue", BLUE)
colour_print("Blue reversed", BLUE, REVERSE)
colour_print("Blue reversed and underlined", BLUE, REVERSE, UNDERLINE)
colour_print("Yellow", YELLOW)
colour_print("Yellow in bold", YELLOW, BOLD)
colour_print("Bold", BOLD)
colour_print("Underline", UNDERLINE)
colour_print("Reverse", REVERSE)
colour_print("Black", BLACK)

colorama.deinit()
