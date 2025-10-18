#include <iostream>
using namespace std ; 
int main(){
    int a = 11 ; 
    // int b = a++ ; first work -> then update 
    int b = ++a ; //first update -> then work 
    cout<< b << endl ; 
    cout<< a << endl ; 

    return 0  ; 
}

