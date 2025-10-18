#include <climits>
#include <iostream>
using namespace std;

int main() {
    int nums[] = {12,44,53,11,-34,19} ; 
    int size = 6 ; 
    int smallest_num = INT_MAX ; 
    int largest_num = INT_MIN ; 
    for(int i = 0 ; i < size ; i++){
        // Longer Approach ----->
        // if(nums[i] < smallest_num  ){
        //     smallest_num =  nums[i] ; 
        // }
        // shorter Approach -----> 

        smallest_num = min( nums[i] , smallest_num) ; 
        largest_num = max(nums[i] , largest_num) ; 
    }

    cout<<"Smallest: "<<smallest_num<<endl ;  
    cout<<"Largest: "<<largest_num<<endl ;  

    return 0;
}