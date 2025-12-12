#include <iostream>
#include <string>
using namespace std ; 
//MultiLevel

class Student{
public:
    string name ; 
    int rollNo ; 
};

class Teacher{
public:
    string subject ; 
    double salary ; 
};

class TA : public Student , public Teacher{
public:

};

int main(){

    TA s1 ; 
    s1.name = "Nafu" ; 
    s1.salary = 21 ; 
    s1.rollNo = 42 ; 
    s1.subject = "CSE" ; 
    
    cout<<s1.subject<<endl ; 
    return 0 ; 
}