#include<stdio.h>
int main(void)
{
	int no1,no2,sum;
	
	printf("Enter the 1st number :");
	scanf("%d", &no1);
	printf("Enter the 2nd number :");
	scanf("%d", &no2);
	
	sum= no1+no2;
	
	printf("Calculation is %d", sum);
	
	return 0;
}
