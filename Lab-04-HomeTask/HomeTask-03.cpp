#include<stdio.h>
int main(){
	int amount,balance;
	printf("Enter balance: ");
	scanf("%i",&balance);
	printf("Enter withdrawal amount: ");
	scanf("%i",&amount);
	if(amount<=0){
		printf("Invalid amount of withdrawal!");
	}
	else if(amount% 500 !=0){
		printf("Withdrawal Failed: Amount must be multiple of 500!");
	}
	else if(amount >balance){
		printf("Withdrawal Failed: Insufficient balance!");
	}
	else if(amount> 25000){
		printf("Withdrawal Failed: Daily limit is 25000!");
	}
	else{
		balance = balance-amount;
		printf("Withdrawal successful!\n");
		printf("Balance remaining: %i", balance);
	}
	return 0;
}
