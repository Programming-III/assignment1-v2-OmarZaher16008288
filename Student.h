#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here

class Student : public Person{

private:

int yearlevel;
string major;

public:
Student(int y,string m);
void display();




};












#endif
