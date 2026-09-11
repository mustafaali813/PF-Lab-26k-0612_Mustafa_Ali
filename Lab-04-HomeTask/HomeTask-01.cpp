#include<stdio.h>
int main(){
	float  weight, height, bmi;
	printf("Enter your body weight: ");
	scanf("%f",&weight);
	printf("Enter your height: ");
	scanf("%f",&height);
	bmi = weight/(height*height);
	printf("%f", bmi);
	if(bmi<18.5){
		printf("-> Catagory: Underweight");
	}
	else if(bmi>18.5 && bmi<24.9){
		printf("-> Catagory: Normal");
	}
	else if(bmi>25 && bmi<29.9){
		printf("-> Catagory: Overweight");
	}
	else{
		printf("-> Catagory: Obese");
	}
	return 0;
}
