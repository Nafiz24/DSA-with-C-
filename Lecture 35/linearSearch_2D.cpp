#include<iostream>
using namespace std;

bool linearSearch(int mat[][3] , int target, int rows , int columns){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; i < columns ; j++){
            if(mat[i][j] == 8){
                return true ; 
            }
        }
    }
    return false ; 
}

int main()
{
    int matrix[4][3] = {{1,2,3} , {5,4,6} ,{7,4,2} , {1,8,4}} ; 
    int rows = 4 ; 
    int columns = 3 ; 
    int target = 8  ; 
    int result = linearSearch(matrix , target , rows , columns) ; 
    cout<<result<<endl; 
     return 0;
}