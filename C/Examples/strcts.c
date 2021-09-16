#include <stdio.h>

struct date //no name structs can also be declared 
//(only if you need to use it once)
{
    int month;
    int day;
    int year;
};

/*  
Another way:-

struct date
{
    int month;
    int day;
    int year;
}today;

this defines the name it the same line too
*/

int main()
{
    struct date today;
    struct date thatDay;

    today.day = 25;
    today.year = 2020;
    today.month = 12;

    struct date thatDay = {12, 12, 2012};

    int nextMonth;

    if(today.month == 12)
         nextMonth = 1;    

    struct date date1 = {.month = 12, .year = 1987};


        //compund literal:-

    today = (struct date) {8, 23, 2015}; //or dot operator can also be used
}