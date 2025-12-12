#include <iostream>
using namespace std ; 

class Person{ 
    public : 
    string name ; 
    int age  ; 
    string love ;
        Person(string name , int age , string love){

            this->name = name ; 
            this->age = age ; 
            this->love = love ; 
        }
    
        
};

class Student: public Person{
    public:
    int rollNo ; 
    Student(string name , int age , int rollNo) : Person(name,age,love){
        this->rollNo = rollNo ; 
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl; 
        cout<<"Age: " << age<<endl ; 
        cout<<"Roll: "<<rollNo<<endl ; 
    }
};
int main(){
    // Person p1("nafu" , 20 , "yese") ; 
    Student s1("nafu" , 21 , 2311) ; 
    s1.getInfo() ; 

    return 0 ; 
}