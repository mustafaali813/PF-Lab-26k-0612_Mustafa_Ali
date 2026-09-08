#include<stdio.h>
int main(){
	int num;
	printf("Enter a year: ");
	scanf("%i", &num);
	if(num%4 ==0){
		printf("%i is a leap year", num);
	}
	else{
		printf("%i is not a leap year", num);
	}
	return 0;
}
