#include <iostream>
using namespace std;

class Student {
    public:
    int Register_no;
    char name[100];

    public:
    void set_Student();
    void set_Display();
};

    void Student::set_Student(){
        cout << "Enter the Student Details" << endl;
        cout << "Enter the Register-No" << endl;
        cin >> Register_no;
        cout << "Enter a Student Name" << endl;
        cin >> name;
    }

    void Student::set_Display() {
        cout << "Student Reg No : " << Register_no << "\nStudent Name : " << name << endl;
    }


class StudentInDetail: public Student {
    char courseName[100];
    int courseFee;

    public:
      void set_Detail();
      void set_Display_Detail();

    };

    void StudentInDetail::set_Detail(){
        set_Student();
        cout << "Enter Course Name" << endl;
        cin >> courseName;
        cout << "Enter Course Fee" << endl;
        cin >> courseFee;
    }

    void StudentInDetail::set_Display_Detail() 
    {
        set_Display();
        cout << "\nCourse Name : " << courseName << "\n Course Fee" << courseFee << endl;
    }



int main() {
    Student student_object1;
    student_object1.set_Detail();
    student_object1.set_Display_Detail();
    return 0;
}