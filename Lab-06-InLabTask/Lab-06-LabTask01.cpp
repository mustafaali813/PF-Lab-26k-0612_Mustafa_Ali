#include<stdio.h>
void main(){
	int age,category, day;
	float price, discount, total;
	while(1){
	printf("Enter your age: ");
	scanf("%d", &age);
	if(age ==0){
		break;
	}
	printf("***Ticketing Kiosk***\n");
	printf("Enter movie category.\n");
	printf("1.Regular\n2.3D\n3.Premiere\n");
	printf("Enter Choice: ");
	scanf("%d", &category);
	switch(category){
		case 1:
			printf("Regular Tickets\n");
			price = 500;
			break;
		case 2:
			printf("3D Tickets\n");
			price = 800;
			break;
		case 3:
			printf("Premiere Tickets\n");
			price = 1200;
			break;
		default:
			printf("Invalid Category!\n");
			break;
	}
	discount = 1;
	if(age<13){
		discount = price*0.30;
	}
	else if(age>=60){
		discount = price*0.20;
	}
	else{
		discount = 0;
	}
	printf("Enter day of the month(1-31): ");
	scanf("%d", &day);
	if(day % 5 == 0){
		printf("Bonus Day!\n");
		if(discount == 0){
			price = price - 50;
		}
		else{
			price = price;
		}
	}
	total = price-discount;
	if(total < 100){
		total = 100;
	}
	printf("Total price = %f\n", price);
	printf("Total discount = %f\n", discount);
	printf("Total final price = %f\n", total);
 	}
	return 0;	
}
