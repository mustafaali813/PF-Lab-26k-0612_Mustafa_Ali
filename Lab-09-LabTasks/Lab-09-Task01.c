#include<stdio.h>
#include<math.h>
#include<string.h>
int sum(int a, int b);
int subtraction(int a, int b);
int main(){
    int a=5, b=10,add;
    add =sum(a,b);
    printf("Sum of %d and %d is %d\n",a,b,add);
    printf("Subtraction: %d\n", subtraction(b,a));
    return 0;
}
int sum(int a, int b){
    return a+b;
}
int subtraction(int a, int b){
    return a-b;
}