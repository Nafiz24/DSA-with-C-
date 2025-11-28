#include<iostream>
#include <vector>
using namespace std;

int sortedArray(vector<int> arr , int n ){
    if(n == 0 || n == 1 ){
        return true ; 
    }

    return arr[n-1] >= arr[n-2] && sortedArray(arr , n-1) ; 
}
int main()
{
    vector<int> arr = {4,2,6,1} ; 
    cout<<sortedArray(arr , arr.size() )<<endl ; 
    return 0;
}