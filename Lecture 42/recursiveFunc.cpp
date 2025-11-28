#include <iostream>
using namespace std ; 

void printNums(int n){

    if(n == 1 ){
        cout<<"1\n" ; 
        return ; 
    }

    cout<<n<<" " ; 
    printNums(n - 1) ; 

}
int main(){
    cout<<"Hello World"<<endl ; 
    printNums(1000) ; 
    return 0  ; 
}