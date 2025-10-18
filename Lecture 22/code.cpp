#include <iostream>
#include <vector>
#include <climits>
using namespace std ; 

bool isPossible(vector<int>&arr , int n , int m , int maxAllowedTime){
    int painters = 1 ,  time = 0 ; 
    for(int i = 0 ; i < n ; i++){
       if(time + arr[i] <= maxAllowedTime){
        time += arr[i] ; 
       }else{
        painters++ ; 
        time = arr[i] ; 
       }
    }
    return painters <= m ;  
}
int minTimeToPaint(vector<int>&arr , int n , int m ){
    int sum = 0  , max_val = INT_MIN ; 
    for(int i = 0 ; i < n ; i++){
        sum += arr[i] ;
        max_val = max(max_val , arr[i]) ;  
    }

    int st =  max_val , end = sum , ans = - 1 ;

    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(isPossible(arr ,  n ,m ,  mid)){
            ans = mid ;  
            end = mid - 1 ; 

        }else{
            st = mid+1 ; 
        }

    }
    return ans ; 
}
int main() {
    vector<int>arr={40,30,10,20} ; 
    int N = 4 , M = 2  ; 
    cout<<minTimeToPaint(arr , N , M )<<endl ;  
    return 0;
}
