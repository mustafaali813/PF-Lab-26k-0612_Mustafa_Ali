#include<stdio.h>
int Max(int a, int b, int c)
{
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a = 10, b =15, c =5;
    int compare;
    compare = Max(a,b,c);
    printf("Maximum of three number is %d\n", compare);

}