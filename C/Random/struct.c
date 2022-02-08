#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char* name;
	int roll_number;
	int age;
	double total_marks;
};


int main()
{
	int i = 0, n = 10, totalstudents = 0;

	struct Student student[n];

	// Get the students data
	student[0].roll_number = 1;
	student[0].name = "Student1";
	student[0].age = 18;

	student[1].roll_number = 2;
	student[1].name = "Student2";
	student[1].age = 17;

	student[2].roll_number = 3;
	student[2].name = "Student3";
	student[2].age = 19;

	student[3].roll_number = 4;
	student[3].name = "Student4";
	student[3].age = 18;

	student[4].roll_number = 5;
	student[4].name = "Student5";
	student[4].age = 20;

    student[5].roll_number = 6;
	student[5].name = "Student6";
	student[5].age = 25;

    student[6].roll_number = 7;
	student[6].name = "Student7";
	student[6].age = 19;

    student[7].roll_number = 8;
	student[7].name = "Student8";
	student[7].age = 17;

    student[8].roll_number = 9;
	student[8].name = "Student9";
	student[8].age = 16;

    student[9].roll_number = 10;
	student[9].name = "Student10";
	student[9].age = 23;

	
	printf("Student above 18 years of age:\n\n");
	for (i = 0; i < n; i++) {

        if(student[i].age > 18)
        {
            totalstudents++;
            printf(" %s\n", student[i].name);
            
        }
	}
    printf("Total students = %d", totalstudents);

	return 0;
}
