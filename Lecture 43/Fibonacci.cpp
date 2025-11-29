#include <iostream>
using namespace std ; 

int fibonacci(int n ){
    if(n == 0 || n == 1){
        return n ; 
    }

    return fibonacci(n-1) + fibonacci(n-2) ; 
}
int main(){
    int  n = 10 ; 
    int start = 0 ; int end = n - 1 ;
    for(int i = start ; i < end ; i++){

        cout<<fibonacci(i)<<endl ; 
    }

    return 0 ; 
}