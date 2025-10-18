#include <iostream>
using namespace std ; 
// Convertion of Decimal to Binary ....
int decToBi(int decNum){
    int ans = 0 ;int  pow = 1 ; 
    while(decNum>0){

        int rem = decNum%2  ;
        decNum /= 2 ; 

        ans += (rem*pow) ; 
        pow *= 10 ; 
        
    }
    return ans ; 
}


//Conversion of binary to Decimal
int biToDec(int binNum){
    int ans = 0 , pow = 1 ; 
    while(binNum>0){

        int rem = binNum % 10 ; 
        ans += (rem * pow) ; 
        binNum /= 10 ; 
        pow *= 2 ; 
    }
    return ans ; 
} 


int main(){

    // cout<<decToBi(4)<<endl ; 
    cout<<biToDec(100)<<endl ; 
    return 0  ; 
}
