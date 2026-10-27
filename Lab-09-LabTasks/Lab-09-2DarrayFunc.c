#include<stdio.h>
void sum2DArray(int arr[3][2], int rows, int columns){
    for(int i =0; i<rows; i++){
        int sum =0;
        for(int j = 0; j <columns; j++){
            sum += arr[i][j];
        }
        printf("Sum of Row %d: %d\n", i+1, sum);
    }

}    
int main(){
    int array[3][2]= {{10,20}, {30,40}, {50,60}};
    sum2DArray(array,3,2);

}