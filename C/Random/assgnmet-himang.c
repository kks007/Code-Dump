#include<stdio.h>

struct student{
    char name;
    int age;
    int marks;
    float avg ;
    char grade;
};


int main()
{
    int student_choice = 4;
 struct student stu_str[10];    
 

 while (student_choice != 0)
 {
     int stu_no = 0;
    printf("***************************************** \n");
    printf("1. Insert \n");
    printf("2. Delete \n");
    printf("3. Display \n");
    printf("Press 0 to exit\n");
    printf("***************************************** \n");

  // int  student_choice = 0;
    printf("Enter choice: ");
    scanf("%d",&student_choice);

      

    switch (student_choice)
    {
    case 0:
    return 0;

    case 1:
        printf("Insert student no. you want to insert data of: ");
        scanf("%d", &stu_no);
        scanf("%c %d %d %f %c",&stu_str[stu_no].name,&stu_str[stu_no].age,&stu_str[stu_no].marks,&stu_str[stu_no].avg,&stu_str[stu_no].grade);
    break;

    case 2:
        printf("Insert student no. you want to delete data of: ");
        // scanf("%d", &stu_no);
        // stu_str[stu_no].name = "****";
        // stu_str[stu_no].age = 00;
        // stu_str[stu_no].marks = 00;
        // stu_str[stu_no].avg = 00;
        // stu_str[stu_no].grade = "****";
        printf("******");
    break;

    case 3:
        printf("Insert student no. you want to display data of: ");
        scanf("%d", &stu_no);
        printf("%c %d %d %f %c \n",stu_str[stu_no].name,stu_str[stu_no].age,stu_str[stu_no].marks,stu_str[stu_no].avg,stu_str[stu_no].grade);
    break;

    default:
        printf("Invalid choice");
    break;
 }
}
 
 
 

}