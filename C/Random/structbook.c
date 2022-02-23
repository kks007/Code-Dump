#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  char* name;
  char* book_name;
  int book_id;
};


int main()
{
  int i = 0, n = 10, totalstudents = 0;

  struct Student student[n];

  student[0].book_name = "Book1";
  student[0].name = "Student1";
  student[0].book_id = 180;

  student[1].book_name = "Book2";
  student[1].name = "Student2";
  student[1].book_id = 170;

  student[2].book_name = "Book3";
  student[2].name = "Student3";
  student[2].book_id = 195;

  student[3].book_name = "Book4";
  student[3].name = "Student4";
  student[3].book_id = 187;

  student[4].book_name ="Book5";
  student[4].name = "Student5";
  student[4].book_id = 205;

  student[5].book_name = "Book6";
  student[5].name = "Student6";
  student[5].book_id = 255;

  student[6].book_name = "Book7";
  student[6].name = "Student7";
  student[6].book_id = 197;

  student[7].book_name = "Book8";
  student[7].name = "Student8";
  student[7].book_id = 174;

  student[8].book_name = "Book9";
  student[8].name = "Student9";
  student[8].book_id = 169;

  student[9].book_name = "Book10";
  student[9].name = "Student10";
  student[9].book_id = 237;

  

  for (i = 0; i < n; i++) {
    printf("Student Name: %s\n", student[i].name);
    printf("Book Name.: %d\n", student[i].book_name);
    printf("Book Name: %d\n", student[i].book_id);
            
  }

  return 0;
}