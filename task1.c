#include <stdio.h>

int main(){
	
	int number;
	int i;
	float l;
	float increment;
	printf("Enter a positive integer N:");
	scanf("%d",&number);

	printf("Numbers from %d to 0 in descending order: ",number);	
	for (i= number;i>=0;i--){
		printf("%d ",i);
	}
	printf("\n");
	printf("Numbers from 1 to %d following pattern B: ",number);	
	
	for (i= 1;i<=number;i++)
	{
		printf("%d ",i);
	}
	
	printf("\n");
	
	printf("Enter an increment value less than 1: ");
	scanf("%f",&increment);

	printf("Numbers from 0 to %d with an increment of %.1f:",number,increment);
	
	
	for(l=0;l<=number;l+=increment){
	
	if(increment>=1)
	{
	printf("Error increment");
	break;
	}
	
	printf(" %.1f",l);
	}
	printf("\n");	
	return 0;
}
