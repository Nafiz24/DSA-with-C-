#include <iostream>
using namespace std ; 

class Student{
public:
string name ; 
double *cgpaPtr ; 

Student(string name , double cgpa){
    this->name = name ;  
    cgpaPtr = new double ; 
    *cgpaPtr = cgpa ; 
}
//Destructor 
    ~Student(){
        cout<<"Hi, I delete Everything!!"<<endl ; 
        delete cgpaPtr ; 
    }

void getInfo(){
    cout<<"Name: "<<name<<endl ; 
    cout<<"CGPA: "<<*cgpaPtr<<endl ; 
    
}
};
int main(){    
    Student s1("Nafuu" , 4.66) ; 
    s1.getInfo() ; 
    return 0 ; 
}