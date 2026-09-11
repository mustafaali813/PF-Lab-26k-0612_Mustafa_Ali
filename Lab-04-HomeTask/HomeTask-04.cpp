#include<stdio.h>
int main(){
	char ch;
	printf("Enter an alphabet: ");
	scanf("%c", &ch);
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
		switch(ch){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("Alphabet is a Vowel!");
				break;
			default:
				printf("Alphabet is a Consonant!");
				break;
		}	
	}
	else{
		printf("Invalid character input!");
	}
	return 0;
	
}
