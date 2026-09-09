#include<stdio.h>
int main(){
	int month,year;
	printf("Enter month (1-12): ");
	scanf("%i", &month);
	printf("Enter year: ");
	scanf("%i", &year);
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("This month has 31 days!");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("This month has 30 days!");
			break;
		case 2:
			if((year%4 == 0 && year%100 != 0) || year%400 == 0 ){
				printf("This month has 29 days!");
			}
			else{
				printf("This month has 28 days!");
			}
			break;
		default:
			printf("Invalid month or year!");
			break;
	}
	return 0;
}
