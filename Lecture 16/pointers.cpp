#include <iostream>
using namespace std ; 

int main(){

    int a = 100 ; 
    int* ptr = &a ;
    int** parptr = &ptr ; 
    cout<<&a<<endl ; 
    cout<<ptr<<endl ; 
    cout<<&ptr<<endl ; 
    cout<<parptr<<endl ; 
    return  0 ; 
}