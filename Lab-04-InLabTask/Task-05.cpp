#include<stdio.h>
int main(){
	double num1,num2,result;
	char ope;
	printf("Enter first number: ");
	scanf("%d", &num1);
	getchar();
	printf("Enter operator (+ - / *): ");
    ope = getchar();
	printf("Enter second number: ");
	scanf("%d", &num2);
	switch(ope){
		case '+':
			result = num1+num2;
			printf("Result: %d\n",result);
			break;
		case '-':
			result = num1-num2;
			printf("Result: %d\n",result);
			break;
		case '*':
			result = num1*num2;
			printf("Result: %d\n",result);
			break;
		case '/':
			if(num2 ==0){
				printf("Error: division by Zero is not possible!");
			}
			else{
					result = num1/num2;
			printf("Result: %d\n",result);
			}
			break;
		default:
			printf("Error: Invalid Operators\n");
	}
	return 0;
}
