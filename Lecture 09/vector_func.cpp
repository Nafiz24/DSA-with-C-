#include <iostream> 
#include <vector>

using namespace std ; 
int main(){

    vector<char>vec={'a' , 'b' , 'c' , 'd' , 'e'} ; 
    cout<<"vector size: "<<vec.size()<<endl; 
    vec.push_back(25)  ; 
    cout<<"vector size: "<<vec.size()<<endl; 
    vec.pop_back() ; 
    vec.pop_back() ; 
    cout<<"vector size: "<<vec.size()<<endl; 
    cout<<vec.at(1)<<endl ;     

    for(int val:vec){
        cout<<val<<endl ; 
    }
    return 0 ; 
}