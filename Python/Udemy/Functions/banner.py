def banner_text(text:str =" ", screen_width: int = 80) -> None:
    """[summary]

    Args:
        text (str, optional): The string to print. Defaults to " ".
        screen_width (int, optional): The width to print within. Defaults to 80.

    Raises:
        ValueError: if the applied string is too long to fit
    """

    if len(text) > screen_width - 4:
        raise ValueError("String {0} is larger than specified width {1}"
                         .format(text, screen_width))
        # print("EEK!!")
        # print("THE TEXT IS TOO LONG TO FIT IN THE SPECIFIED WIDTH")
    
    if text == "*":
        print("*" * screen_width)
    else:
        centered_text = text.center(screen_width - 4)
        output_string = "**{0}**".format(centered_text)
        print(output_string)

banner_text("*", 60)
banner_text("sup idiot??", 60)
banner_text(screen_width=60)
banner_text("you wanna play something?", 60)
banner_text("*", 60)

# numbers = [4, 2, 6, 7, 7, 8, 9]
# print(numbers.sort()) 
#                       ## this will return none cause 
#                       ## .sort() performs an action
#                       ## it doesn't return anything
                      
