#include <iostream>
#include <vector>
using namespace std ; 

class Solution {
public:

    int binarySearch(vector<int>& nums , int st , int end , int target){
         
        if(st <= end){
            int mid = st + (end - st) / 2 ;
            if(nums[mid] == target) return mid ; 
            else if(nums[mid] < target){
                return binarySearch(nums , mid+1 , end, target) ; 
            }else{
                return binarySearch(nums , st , mid-1, target) ;  
            }
        }
        return -1 ; 
    }
    
    int search(vector<int>& nums, int target) {
        return binarySearch(nums , 0 , nums.size()-1 , target );
    }
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8} ; 
    int target = 7 ; 
    Solution sol ; 
    int index = sol.search(arr , target) ; 

    if(index != -1){
        cout<<"Target Found At: "<<index <<endl ; 
    }else{
        cout<<"Sorry Target Can't be Found!";
    }

}