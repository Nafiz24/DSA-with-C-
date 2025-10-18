#include <iostream>
#include <vector>
using namespace std ;
int main(){

    // vector<int>vec={1,2,3} ; //3 
    vector<int>vec(3,0) ; 
    for(int i : vec){
        cout<<i << endl ; 
    }
    cout<<vec[0]<<endl ;  

    return 0 ; 

}