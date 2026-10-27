#include<stdio.h>
int SumArray(int arrr1[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arrr1[i];
    }
    int avg = sum/5;
    return sum;
}
void MaxAndMin(int arrr1[], int size){
    int max = arrr1[0];
    int min = arrr1[0];
    for(int i=1; i<size; i++){
        if(arrr1[i]> max){
            max = arrr1[i];
        }
        if(arrr1[i] < min){
            min = arrr1[i];
        }
    }
    printf("Maximum Number of Array: %d\n", max);
    printf("Minimum Number of Array: %d\n", min);
}
int main(){
    int array[]= {10,20,30,40,50};
    int answer;
    answer = SumArray(array, 5);
    printf("Sum of array elements is %d\n", answer);
    MaxAndMin(array, 5);
    return 0;
}