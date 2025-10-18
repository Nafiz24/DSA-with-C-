#include<iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{
    set<int>s ; 
    s.insert(1) ; 
    s.insert(2) ; 
    s.insert(3) ; 
    s.insert(4) ; 
    s.insert(5) ; 
    s.insert(6) ; 

    cout<<"Lower Bound = "<<*(s.lower_bound(5))<<endl ; 
    for(auto val : s){
        cout<<val<<" " ; 
    }
    cout<<endl ; 
    return 0;
}