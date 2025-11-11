#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <string>

using namespace std;
//#write Instructor class here
class Insructor: public Person{

private:

string departement;
int experiences;

public :
Insructor(string n,int i,string d,int e);
void display();
};











#endif
