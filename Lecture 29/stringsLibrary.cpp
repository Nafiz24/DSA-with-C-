#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

 int main()
{
    //string library is dynamic and we can use it 
    // string str1 = "Nafuuuu is here" ; 
    // string str2 = " Now All will regret" ; 
    // string str3 = str1 + str2 ; //Concatenating
    // cout<<str3<<endl ;  
// Taking the inputs
    // string str ; 
    // getline(cin , str) ; 
    // cout<<"Output: "<<str<< endl ; 
// Looping through a string  ;
    // string str = "Hello Its Nafu" ; 
    // for(char ch:str){
    //     cout<<ch<<" " ; 
    // }

//Reverse the string .... 
    string str = "Nafiz Mahmud" ; 
    reverse(str.begin() , str.end()) ; //Iterators ..
    cout<<str<<endl ; 
    return 0;
}