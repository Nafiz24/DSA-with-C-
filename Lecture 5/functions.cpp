#include <iostream>
using namespace std ; 

// int printHello(){

//     cout<<"Hello\n";
//     return 4 ;
// }

// int sum(int a , int b ){
//     int s = a + b ;
//     return s;

// }

// int sumN(int a ){
//     int num = 0 ; 
//     for(int i = 0 ; i<=a ; i++){
//         num+=i ; 
//     }
//     return num ; 
// }

int factorialN(int n){
    int sum = 1 ;  
    for(int i = 1 ; i <= n ; i++){
        sum*= i;
    }
    return sum; 
}

int main(){
    // function call
    // cout<<printHello();
    //    cout<<sum(3,4);
    // cout<<sumN(5)<<endl ; 
    cout<<factorialN(4)<<endl ; 
    return 0 ; 
}
