#include <iostream>
using namespace std ; 

int main(){
    // int age  ; 

    // cout<<"Enter your Age: "<<endl ; 
    // cin>>age;
    
    // if(age >= 18 ){
    //     cout<<"You Are eligible to Vote"<< endl ; 
    // }else{
    //     cout<<"You are not Eligible to Vote"<<endl ; 
    // }

    char ch ; 
    cout<< "enter the Character: " ; 
    cin>> ch  ; 

    if(ch >= 'a' && ch<='z' ){
        cout<< "Lowercase" ; 
    }else {
        cout<< "Uppercase" ; 
    }


    return 0 ; 
}

