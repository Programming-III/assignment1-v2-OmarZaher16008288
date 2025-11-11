#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

Person::Person(string n,int i){
   name =n;
   id =i;
}
void Person::display(){

   cout<<"Name: "<<name<<endl;
   cout<<"ID: "<<id<<endl;
}






// ==================== Student Class Implementation ====================
Student::Student(string n,int i,int y,string m) : Person(n,i){
yearlevel=y;
major = m;
   
}
void Student::display(){
Person::display();
   cout<<"yearlevel: "<<yearlevel<<endl;
   cout<<"major: "<<major<<endl;
   
}






// ==================== Instructor Class Implementation ====================




Insructor::Insructor(string n,int i,string d,int e) :Person(n,i){
departement=d;
   
experiences=e;
   
}
void Insructor::display(){
Person::display():
   cout<<"departement: "<<departement<<endl;
   cout<<"experiences: "<<experiences<<endl;
   
}




// ==================== Course Class Implementation ====================

string coursecode;
string coursename;
int maxStudents;
Student* students;
int currentStudents;

public:

Course::Course(string co,string cm,int m,int cu){
   
}

void Course::addStudents(const Student& s){
   
}
void Course::displayCourseInfo(){
   
}
Course::~Course(){
   
}







// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
