#include <iostream>
using namespace std;

class circle
{
public:  //Access Specifier
    double radius {0};   //Member variable
    double pi {3.14};   // Member Variable

    void findAreaOfCircle() //Member Functions
    {  
        double area = pi * radius * radius;
        cout << "The Area of Circle is : " << area << endl; 
    }
};

int main () 
{
    circle Object_1; //Creating Object for a class circle
    Object_1.radius = 10;  //Asigning Variable to radius Member variable within a class circle
    Object_1.findAreaOfCircle();
}


