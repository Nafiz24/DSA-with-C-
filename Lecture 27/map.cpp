#include<iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int>m ; 
    m["TV"] = 100 ; 
    m["Watch"] = 123 ; 
    m["BUG"] = 1000 ; 
    m["Remote"] = 1234 ; 
    m.insert({"Camera", 25}) ; 
    m.emplace("Camero", 200) ; 
    for(auto p : m ){
        cout<<p.first<<" "<<p.second << endl ; 
    }
    cout<<m.count("BUG")<<endl ; 
    return 0;
}