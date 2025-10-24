#include<iostream>
using namespace std;
int main()
{
    // char str[] = {'a' , 'b' , 'c','\0'} ; 
    // cout<<str<<endl ; //constant pointers
    // char str[100] ; 
    // cout<<"Enter anything: ";
    // cin.getline(str , 100) ; 
    // cout<<str<<endl; 

    char str[] = "nafiz mahmud" ; 
    int lines = 0 ;
    for(int i = 0 ; i < str[i] != '\0';i++ ){
        lines++ ; 
    }
    cout<<"Total Lines: " << lines<<endl ; 
    return 0;
}