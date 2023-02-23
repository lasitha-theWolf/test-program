#include<stdio.h>
int main(void)
{
	int num,sum,counter;
	float avg;
	
	sum = 0;
	counter = 0;
	
	printf("Enter series of numbers : ");
	scanf("%d", &num);
	
	
	while(num>0) {
	   sum = sum + num;
	   counter = counter + 1;
	   printf("Enter number : ");
	   scanf("%d", &num);
	   
	   
	}
	avg = (float)sum/counter; 
	printf("Sum is %d \n Average is %.2f", sum, avg);
	
	return 0;
}
