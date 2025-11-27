#include<iostream>
using namespace std;
int main()
{
    //.........................................LOOPS.......................................
    // int matrix[4][3] = {{2,5,6} , {2,5,2} , {1,2,4} , {7,8,9}} ; 
    // int rows = 4 ; 
    // int columns = 3 ; 

    // cout<<matrix[3][2]<<endl ; 
    // for(int i = 0 ; i< rows ; i++){

    //     for(int j = 0 ;  j < columns ; j++){

    //         cout<<matrix[i][j]<<" " ; 
    //     }
    //     cout<<endl ; 
    // }

    int matrix[4][3] ; 
    int rows = 4 ; 
    int cols = 3 ; 

    //input...
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            cin>>matrix[i][j] ; 
        }
    }

    // Output
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            cout<<matrix[i][j]<<" " ; 
        }
        cout<<endl; 
    }
    return 0;
}