#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

struct month1
{
    int num;
    char name[3];
};


int main()
{
    //structs in arrays

    struct date myDates[10];
    
    myDates[1].month = 8;
    myDates[2].day = 12;

    struct date dates[5] = { {12,3,2013}, {31,12,2018}};
    struct date dates2 [5] = { 12,3,2013, 31,12,2018}; 
    //inner brackets are optional

    struct date myDates[5] = {[2] = {13,4,1995}};
    struct date myDates[5] = {[1].month = 12, [1].day = 30};

    //arrays in structs

    struct month1 aMonth;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';

    //method 2:

    struct month1 aMonth = {31, {'J', 'a', 'n'}};

    struct month1 months[12]; //setting 12 month structure in an array

}