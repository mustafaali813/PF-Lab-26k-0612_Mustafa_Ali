#include<stdio.h>
int main(){
	float side1,side2,side3;
	printf("Enter length of side1: ");
	scanf("%f", &side1);
	printf("Enter length of side2: ");
	scanf("%f", &side2);
	printf("Enter length of side3: ");
	scanf("%f", &side3);
	if((side1+side2)>side3 && (side2+side3)>side1 && (side3+side1)>side2){
		printf("Valid triangle -> Type: ");
	}
	else{
		printf("Invalid triangle!");
		return 0;
	}
	if(side1==side2 && side2==side3){
		printf("Equilateral");
	}
	else if((side1==side2) || (side2==side3) || (side3==side1)){
		printf("Isosceles");
	}
	
	else{
		printf("Scalen");
	}
	return 0;
	
}
