#include <iostream> 
#include <vector>
#include <climits>
using namespace std ;
int main(){
    int  n  = 5 ; 
    int arr[5] = {1,2,3,4,5} ; 
    int max_sum = INT_MIN ; 

    for(int st = 0 ; st < n ; st++){
        int currSum = 0 ; 
        for(int end = st ; end<n ; end++){
            currSum += arr[end] ; 
            max_sum = max(currSum , max_sum) ; 
        }

    }
    cout<<"max Subarray Sum: "<<max_sum <<endl ; 

    return 0 ; 
}