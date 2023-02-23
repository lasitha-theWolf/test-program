#include<stdio.h>
int main(void)
{
	int sec,time;
	float charge, amount, total;
	char peak;
	
	printf("Enter Time period :");
	scanf("%d", &sec);
	
	printf("Enter Number of times :");
	scanf("%d", &time);
	
	printf("Peak time (Y/N) :");
	scanf(" %c", &peak);
	
	
	if (time > 60)
	{
		amount = 20000.00;
		
	}
	if (40 < time < 60){
		amount = 15000.00;
	}
	switch (peak){
		case 'Y' : total = (amount * time) + (amount * time * 10/100.0);break;
		case 'N' : total = (amount * time); break;
		default  : printf("invalid hutto");
		
	}
	printf("Total is : %.2f", total);
	
	return 0;
}
