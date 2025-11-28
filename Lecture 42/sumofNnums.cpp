#include <iostream>
using namespace std ; 

int sumOfNNums(int n){

    if(n == 1){
        return  1 ;
    }

    return n + sumOfNNums(n-1) ; 
}
int main(){

    int summed = sumOfNNums(5) ; 
    cout<<summed<<endl ; 
    return 0 ;
}