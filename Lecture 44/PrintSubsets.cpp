#include <iostream>
#include <vector>
using namespace std ; 

void printSubsetsArr(vector<int >&arr, vector<int> &ans, int i){
    if(i == arr.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl ; 
        return ; 
    }

    // Include 
    ans.push_back(arr[i]) ; 
    printSubsetsArr(arr , ans , i+ 1) ; 
    //Exclude
    ans.pop_back() ; //backtrack 
    printSubsetsArr(arr , ans , i+1) ; 
}
int main(){
    
    vector<int>arr = {1, 2, 3} ; 
    vector<int>ans ; 
    printSubsetsArr(arr , ans ,0) ; 
    return 0 ;
}