#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec = {1,2,4,5,6} ;
    // vector<int>::iterator itr ; 
    // vector<int>::reverse_iterator itr ; 

    // for(itr =vec.begin() ; itr != vec.end() ; itr++){
    //     cout<< *(itr) <<" ";
    // } 

    for(auto itr = vec.rbegin() ; itr != vec.rend() ; itr++){
        cout<<*(itr)<<"" ; 
    } 
    // cout<<"vec begin"<<*(vec.begin())<<endl ;

    // cout<<"vec end"<<*(vec.end()) ; 
    return 0;
}