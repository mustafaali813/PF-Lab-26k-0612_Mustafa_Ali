#include<stdio.h>
int main(){
	int units;
	double bill;
	printf("Enter your Electricity units: ");
	scanf("%i", &units);
	if(units<=0){
		printf("Invalid units!");
	}
	else if(units <=100){
		bill = 5*units;
	}
	else if(units <=200){
		bill = (100*5)+((units-100)*8);
	}
	else if(units <=400){
		bill = (100*5)+(100*8)+((units-200)*12);
	}
	else{
		bill = (100*5)+(100*8)+(200*12)+((units-400)*15);
	}
	printf("Total Bill: Rs. %f", bill);
	return 0;
}
