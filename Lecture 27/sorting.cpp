#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Making a CUSTOM COMPARATOR...
bool comparator(pair<int ,int >p1 , pair<int , int>p2 ){
    if(p1.second < p2.second) return true ; 
    if(p1.second > p2.second) return false ; 
    if(p1.first <p2.first) return true ; 
    else return false ; 
}

int main()
{
    // int arr[5] = {1,2,4,5,6} ; 
    // sort(arr , arr+5)
    // vector<int>vec = {1,2,4,5,6} ; 
    // sort(vec.begin() , vec.end()); 
    // sort(vec.begin() , vec.end() , greater<int>()); 
    vector<pair<int , int >>vec = {{3,1} , {4,2} , {5,3} , {6,7}} ; 
    sort(vec.begin() , vec.end(), comparator) ; 
    for(auto p : vec ){
        cout<<p.first<<" "<<p.second<<endl ; 
    }
    return 0;
}