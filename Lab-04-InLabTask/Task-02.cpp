#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter a number1: ");
	scanf("%i", &num1);
	printf("Enter a number2: ");
	scanf("%i", &num2);
	printf("Enter a number3: ");
	scanf("%i", &num3);
	if(num1>num2 && num1>num3){
		printf("Largest number is %i\n ", num1);
	}
	else if(num2>num1 && num2>num3){
		printf("Largest number is %i\n", num2);
	}
	else{
		printf("largest number is %i\n", num3);
	}
	return 0;
}
