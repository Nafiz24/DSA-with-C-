#include <iostream>
#include <string>
using namespace std ; 

class Student{
public:
/*
    string name ; 
    double cgpa ; 

    Student(string name , double cgpa){
        this->name = name ;  
        this->cgpa= cgpa;  
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl ; 
        cout<<"CGPA: "<<cgpa<<endl ; 
        
    }
    };
*/

string name ; 
double *cgpaPtr ; 

Student(string name , double cgpa){
    this->name = name ;  
    cgpaPtr = new double ; 
    *cgpaPtr = cgpa ; 
}

Student(Student &obj){
    this->name = name ; 
    cgpaPtr = new double ; 
    *cgpaPtr = *obj.cgpaPtr ; 
}
void getInfo(){
    cout<<"Name: "<<name<<endl ; 
    cout<<"CGPA: "<<*cgpaPtr<<endl ; 
    
}
};
int main(){    
    Student s1("Nafuu" , 4.66) ; 
    Student s2(s1) ; //NEHA 
    s1.getInfo() ; 
    *(s2.cgpaPtr) = 9.2 ; 
    s2.name = "Neha" ; 
    s2.getInfo() ; 
    s1.getInfo();
    return 0 ; 
}