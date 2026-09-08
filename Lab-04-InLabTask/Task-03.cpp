#include<stdio.h>
int main(){
	int num;
	printf("Enter your marks(0-100): ");
	scanf("%i", &num);
	if(num >=85){
		printf("Grade A");
	}
	else if(num >=70){
		printf("Grade B");
	}
	else if(num >=60){
		printf("Grade C");
	}
	else if(num >=50){
		printf("Grade D");
	}
	else{
		printf("You are Fail");
	}
	return 0;
}
