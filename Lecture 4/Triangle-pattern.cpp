#include <iostream>
using namespace std  ; 
// Problem 7..............
int main(){
    int n = 4 ; 
    int multi = 1 ; 
    for(int i = 0; i<n ;i++){
        for(int j = 0 ; j<i+1 ; j++ ){
            cout<<"*"; 
        }
        cout<<endl ; 
    }
    return 0 ; 
}
// Problem 8.....................
int main(){
    int n = 3  ; 
    for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout<< (i+1) ; 

        }   
        cout<<endl ; 
    }
}
//Practice
int main(){
    int n = 5 ; 
    for(int i = 0 ; i<n ; i++){
        char ch = 'A' + i   ; 
        for(int j=0 ; j<i+1 ; j++){
            cout<< ch ; 

        }   
        cout<<endl ; 
    }

}
// Problem 9 ..........................
int main(){
    int n = 5 ; 
    for(int i = 0 ;  i < n ; i++){
        for(int j = 1 ; j<=i+1 ; j++ ){
            cout<<j<<" " ; 
        }
        cout<<endl ; 
    }
    return 0 ; 
}


