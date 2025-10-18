#include <iostream>
using namespace std ; 

int main(){
    // int n = 4 ; 

    // for (int i = 0 ; i<=n ; i++ ){

    //     cout<<i<<" ";
    // }
    // cout<<endl ; 
    // int  n ; 
    // cout<<"Enter the number" << endl ; 
    // cin>> n ; 
    // int total = 0  ; 
    // for(int i = 0 ; i<= n ; i++ ){

    //     total+=i ;
    // }
    // cout<<total<<endl ; 

    // Sum of all odd numbers from 1 to n ; 

    // int n = 10 ; 
    // int total = 0 ; 
    // for(int i = 0 ; i <= n ; i++){

    //     if (i%2 != 0 ){
    //         total +=i ; 
    //     }
        
    // }
    // cout<<total<<endl ; 

    // Check if a number prime or not 

        int n ; 
        cout<< "Enter the Number: " ; 
        cin>> n ; 
        bool isPrime = true ; 

        for(int i = 2 ; i*i <= n ; i++){
            if(n%i == 0){
                isPrime = false ; 
                break;
            } 
        }


        if(isPrime == false){
            cout<<"Non-Prime Number" ;} 
        else if (n==1)
            {
               cout<<"NON PRIME"<<endl ; 
            }
            
        else{
            cout<<"Prime Number" ; 
        }
        return 0 ; 
    }