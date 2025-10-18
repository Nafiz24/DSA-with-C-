#include<iostream> 
using namespace std ; 

int main(){
    // int marks[] = {99,60,77,45,100} ; 
    // int size = 5; 


    int size = 5 ; 
    int marks[size] ; 

    for(int i = 0  ; i<size ; i++ ){
        cin>>marks[i] ; 
    }
    cout<<endl ; 
    for(int i = 0 ;i<size ;i++){
        cout<<marks[i]<<endl ; 
    }
}