#include<iostream>
using namespace std;

bool Armstrong(int n){
    int copyN = n ; 
    int sumOfCubes = 0 ; 
    while(n != 0){
        int dig = n % 10 ; 
        sumOfCubes +=( dig*dig*dig ); 

        n /= 10 ; 
    }
    return sumOfCubes == copyN ; 

}
int main()
{
    int n = 153 ; 
    if(Armstrong(n)){
        cout<<"Is An Armstrong Value"<<endl ; 
    }else{
        cout<<"NOT An Armstrong Value"<<endl ; 

    }
    return 0;
}