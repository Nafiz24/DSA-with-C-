#include <iostream>
using namespace std;

void changeArr(int arr[] , int size) {
    cout<<"In Function"<<endl ; \
    for(int i = 0 ; i < size ; i++){
        arr[i] = arr[i] * 2 ;
    };
    
}
int main() {
    int arr[] = {2,3,5} ; 
    changeArr(arr , 3) ; 
    cout<<"In main\n" ; 
    for(int i = 0 ; i< 3 ; i++ ){
        cout<<arr[i]<<" " ; 
    }
    cout<<endl ; 
    return 0;
}