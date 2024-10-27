#include <stdio.h>
	
	
	int main(){
	
	int number, i;
	
	printf("Enter your number: ");
	scanf("%d",&number);
	
	for (i=2;i<=number;i++){
	
	if(number == 2) {
	printf("%d is a prime number\n", number);
       	break;
	}
	
	if (number % i == 0){
	printf("%d Not is a prime number\n", number); 
	break;
       	}
	
	printf("%d is a prime number\n", number); 
	break; 
	}
		return 0;
	}
