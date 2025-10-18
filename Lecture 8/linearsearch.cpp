#include <iostream>
using namespace std;

int linearSearch(int arr[] , int sz , int target){
    for(int i =0 ; i<sz ; i++){
        if(arr[i] == target){
            return i ; 
        }

    }
    return -1 ; 
}

int main() {
    int arr[6] = {12,3,4,7,3,8} ; 
    int sz = 6 ; 
    int target = 8 ; 
    
    cout<<linearSearch(arr,sz ,target )<<endl ; 
    return 0;
}