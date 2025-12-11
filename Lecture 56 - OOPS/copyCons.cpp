#include <iostream>
#include <string>
using namespace std ; 

class Teacher{
    private : 
        double salary ; 

    //Non-Parameterized
    // Teacher(){
    //     dept = "Computer Science" ; 
    // }
public:
    //Properties or Attributes
    string name ; 
    string dept ; 
    string subject ; 

    //Parameterized
    Teacher(string name , string dept , string subject , double salary){
        this->name =  name ; 
        this->dept = dept ; 
        this->subject = subject ; 
        this->salary = salary ;
    }

    //Copy Constructor
    Teacher(Teacher &orgObj){
        cout<<"I am the Copy Constructor."<<endl ; 
        this->name = orgObj.name ; 
        this->dept = orgObj.dept ; 
        this->subject = orgObj.subject ; 
        this->salary = orgObj.salary ; 
    }
   
    //Methods
    void changeDept(int newDept){
        dept = newDept ; 
    }
    
    void getInfo(){
        cout<<name<<endl ; 
        cout<<salary<<endl ; 
    }
};


int main(){    
    
    Teacher t1("Nafu" , "CS" , "C++" , 25000);
    // t1.getInfo() ;  

    // Teacher t2(t1) ; //default copy constructor
    Teacher t2(t1) ; //Custom Copy Constructor
    t2.getInfo() ; 
    return 0 ; 
}