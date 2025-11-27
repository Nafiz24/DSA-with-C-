#include<iostream>
#include <climits>
using namespace std;

int getMaxSum(int mat[][3] , int rows , int cols){

    int maxSumRows = INT_MIN ; 
    for(int i = 0 ; i < rows; i++){
        int sumIRow =  0 ; 
        for(int j = 0 ; j < cols ; j++){
            sumIRow += mat[i][j] ; 
             
        }
        maxSumRows = max(maxSumRows , sumIRow) ; 
    }
    return maxSumRows ; 
}

int main()
{
    int matrix[3][3] = {{1,2,3} , {4,5,6} ,{7,8,9}} ; 
    int rows = 3 ; 
    int columns = 3 ; 
    int result = getMaxSum(matrix , rows , columns) ; 
    cout<<result<<endl; 
     return 0;
}