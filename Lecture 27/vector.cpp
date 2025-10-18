#include <iostream>
#include <vector>
using namespace std ;

int main(){
    // vector<int>vec ; 
    
    // vec.push_back(1) ; 
    // vec.push_back(2) ; 
    // vec.push_back(3) ; 
    // vec.push_back(4) ; 
    // vec.push_back(5) ; 
    // vec.emplace_back(6) ; 
    // vec.pop_back()  ; 
    vector<int>vec = {1,2,3,4,5,6};
    // vec.erase(vec.begin()); 
    // vec.erase(vec.begin()+ 1 , vec.begin() + 4); 
    vec.insert(vec.begin() + 3 , 100) ; 
    // vec.clear() ; 


    for(int val:vec){
        cout<<val<<" "; 
    }
    cout<<endl; 
    cout<<"value at index 2=> "<<vec[2] <<" or "<<vec.at(2);
    return 0 ; 
}