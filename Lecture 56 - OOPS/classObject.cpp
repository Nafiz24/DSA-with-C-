#include <iostream>
#include <string>
using namespace std ; 

class Teacher{
private:
    double salary ; 
public:
    //Properties or Attributes
    string name ; 
    string dept ; 
    string subject ; 

    //Methods
    void changeDept(int newDept){
        dept = newDept ; 
    }
    // setter
    void setSalary(double s){
        salary = s ; 
    }
    // getter
    double getSalary(){
        return salary ; 
    }
};

class Account{
    private:
    double balance ; 
    string password ; //data hiding
    public:
    string usedId ; 
    string username ; 

};
int main(){
    Teacher t1 ; 
    t1.name = "Nafuu" ; 
    t1.subject = "CS" ; 
    t1.dept = "CSE" ; 
    t1.setSalary(25000) ; 
    cout<<t1.getSalary()<<endl ; 
    
    cout<<t1.name<<endl ; 

     
    return 0 ; 
}