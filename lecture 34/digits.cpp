#include<iostream>
using namespace std;
void printDigits(int  n ){

    while(n != 0 ){
        int digits = n%10 ; 
        cout<<digits<<endl ; 

        n /= 10  ; 
    }
}

int main()
{
    int n = 10204 ; 
    printDigits(n) ;  
    return 0;
}