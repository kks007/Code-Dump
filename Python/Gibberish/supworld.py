## write a program to calculate compound interest for p amount = 10,000 at the rate = 5%, and the time = 7 years.

def cInt(principle, rate, time):

    Amount = principle * (pow((1 + rate / 100), time))
    CI = Amount - principle
    print("Compound interest is", CI)
 
cInt(10000, 5, 7)

