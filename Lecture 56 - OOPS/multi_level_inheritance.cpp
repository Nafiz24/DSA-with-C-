#include <iostream>
#include <string>
using namespace std ; 
//MultiLevel
class Person{ 
public : 
    string name ;
    int age ;
};

class Student: public Person{
public:
    int rollNo ;
};

class GradStudent : public Student{
public:
    int researchArea ; 
};

int main(){

    GradStudent s1 ; 
    s1.name = "Nafu" ; 
    s1.age = 21 ; 
    s1.rollNo = 42 ; 
    s1.researchArea = 12 ; 
    cout<<s1.researchArea<<endl ; 
    return 0 ; 
}