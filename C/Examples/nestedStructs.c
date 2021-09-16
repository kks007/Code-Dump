#include <stdio.h>

struct date 
{
    int month;
    int day;
    int year;
};

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

int main()
{
    struct dateAndTime event = {{2,1,2015}, {3,30,0}};
    
    struct dateAndTime event2 = 
    {
        {.month = 2, .day = 1, .year = 2018},
        {.hours = 3, .minutes = 30, .seconds = 0}
    };

    //arrays of nested structures 

    struct dateAndTime events[100];

}