#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char name[50];
	int roll_number;
	int age;
    int m1, m2, m3, m4, m5;
};


int main()
{

	struct Student s;

    printf("Enter marks of the 5 subjects (with spaces): ");
    scanf("%d%d%d%d%d", &s.m1, &s.m2, &s.m3, &s.m4, &s.m5);

    int sum = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    int avg = sum/5;
    
    printf("Average marks = %d", avg);
    

	return 0;
}
