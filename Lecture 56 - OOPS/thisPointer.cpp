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
public:
   
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
    cout<<t1.dept<<endl ;
    t1.getInfo() ;  
    return 0 ; 
}