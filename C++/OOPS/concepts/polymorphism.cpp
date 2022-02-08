#include <iostream>
using namespace std;

class Teacher {
  public:
    void TeacherJob() {
    cout << "The Teacher Teaches \n" ;
  }
};

class ScienceTeacher : public Teacher {
  public:
    void TeacherJob() {
    cout << "The Teacher teaches science\n" ;
   }
};

class MathTeacher : public Teacher {
  public:
    void TeacherJob() {
    cout << "TThe Teacher teaches math\n" ;
  }
};

int main() {
  Teacher myTeacher;
  ScienceTeacher sci;
  MathTeacher math;

  myTeacher.TeacherJob();
  sci.TeacherJob();
  math.TeacherJob();
  return 0;
}