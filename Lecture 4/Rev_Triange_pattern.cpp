#include <iostream>
using namespace std ; 
// problem 10 
// int main(){
//     int n = 4 ; 
//     for(int i = 0 ; i < n ; i++ ) {
//         for(int j = i+1 ; j>0 ; j--){
//             cout<<j<<" "; 
//         }
//         cout<<endl ; 
//     }

//     return 0 ; 
// }

// Problem 11 : Floyed's Triangle Pattern 

int main(){
    int n =4 ; 
    for(int i = 0 ; i<n ; i++ ) {
        int num = 1 ; 
        for(int j = i+1 ;j>0 ;j-- ){
            cout<<num<<" " ; 
            num++ ; 

        }
        cout<<endl ; 
    }
}
