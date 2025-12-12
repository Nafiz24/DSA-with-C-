#include <iostream>
#include <string>
using namespace std ; 
//MultiLevel

class HUMMAN{
public:
    string name ; 
    int soul ; 
};

class Teacher : public HUMMAN{
public: 
    double salary ; 
};

class Student : public HUMMAN{
public:
    string subject ; 
};

int main(){

    Student s1 ; 
    s1.name = "Nafu" ; 
    Teacher t1 ;     
    t1.soul  = 1 ; 
    cout<<s1.name<<endl ; 
    cout<<t1.soul<<endl ; 

    return 0 ; 
}