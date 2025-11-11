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
void Student:: display(){
Person::display();
   cout<<"yearlevel: "<<yearlevel<<endl;
   cout<<"major: "<<major<<endl;
   
}






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
