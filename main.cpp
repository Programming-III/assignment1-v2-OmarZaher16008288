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



Course::Course(string co,string cm,int m) {
   coursecode=co;
   coursename=cm;
   maxStudents=m;
   students=NULL;
   currentStudents=0;
}

void Course::addStudents(const Student& s){
   
   students[currentStudents] = s;
   currentStudents++;
   delete[]students;
}
void Course::displayCourseInfo(){
   for(int i = 0; i < currentStudents; i++) {
	cout << students[i] << endl;
}
   cout<<"coursecode: "<<coursecode<<end;
    cout<<"coursename: "<<coursename<<end;
    cout<<"maxStudents: "<<maxStudents<<end;
    cout<<"currentStudents: "<<currentStudents<<end;
}
Course::~Course(){
   delete[]students;
}







// ==================== Main Function ====================
int main() {
   Course c1("CS101","introduction to Programing",3);
    return 0;
}
