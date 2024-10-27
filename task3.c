#include <stdio.h>

int main(){
	
	int citie , i, population, value, max, min;
	float sum =0;
	
	printf("Enter the number of cities: ");
	scanf("%d",&citie);
	
	for (i=1;i<=citie;i++){
	
	printf("Enter the population of city %d: ",i);
	scanf(" %d",&population);
	
	sum = population + sum;
	
	if ( i == 1 )
    	{
	
        max = population;
        min = population;
    	}
    	else if ( max < population )
    	{
    	    max = population;
    	}
    	else if ( population < min )
    	{
            min = population;
    	}

	}
	float mean = sum /4;
	printf("Mean population: %.2f\n",mean);
	printf("Maximum population:%d\n",max);
	printf("Minimum population:%d\n",min);

	return 0;
}
