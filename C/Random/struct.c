#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char* name;
	int id;
	int age;
	char* address;
};


int main()
{
	int i = 0, n = 10, totalstudents = 0;

	struct Student student[n];

	student[0].id = 1;
	student[0].name = "Student1";
	student[0].age = 18;
	student[0].address = "Address1";

	student[1].id = 2;
	student[1].name = "Student2";
	student[1].age = 17;
	student[1].address = "Address2";

	student[2].id = 3;
	student[2].name = "Student3";
	student[2].age = 19;
	student[2].address = "Address3";

	student[3].id = 4;
	student[3].name = "Student4";
	student[3].age = 18;
	student[3].address = "Address4";

	student[4].id = 5;
	student[4].name = "Student5";
	student[4].age = 20;
	student[4].address = "Address5";

    student[5].id = 6;
	student[5].name = "Student6";
	student[5].age = 25;
	student[5].address = "Address6";

    student[6].id = 7;
	student[6].name = "Student7";
	student[6].age = 19;
	student[6].address = "Address7";

    student[7].id = 8;
	student[7].name = "Student8";
	student[7].age = 17;
	student[7].address = "Address8";

    student[8].id = 9;
	student[8].name = "Student9";
	student[8].age = 16;
	student[8].address = "Address9";

    student[9].id = 10;
	student[9].name = "Student10";
	student[9].age = 23;
	student[9].address = "Address10";

	int id_to_search = 0;
	printf("Enter the student id: ");
	scanf("%d", &id_to_search);

	for (i = 0; i < n; i++) {

        if(student[i].id == id_to_search)
        {
            totalstudents++;
            printf(" %s\n", student[i].name);
            
        }
  }

	return 0;
}
