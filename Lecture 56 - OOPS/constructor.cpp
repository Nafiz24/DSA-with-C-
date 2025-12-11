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
    //Parameterized
    Teacher(string n , string d , string s , double sal){
        name =  n ; 
        dept = d ; 
        subject = s ; 
        salary = sal ;
    }
public:
    //Properties or Attributes
    string name ; 
    string dept ; 
    string subject ; 

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