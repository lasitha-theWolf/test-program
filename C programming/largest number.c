#include<stdio.h>
int main(void)
{
	int no1, no2;
	printf("%s", "Enter two numbers :");
	scanf("%d%d", &no1, &no2);
	
	
	if(no1>no2)
	printf("%d is the largest number\n", no1);
	
	
	if (no1<no2)
	printf("%d is the largest number\n", no2);
	
	

   return 0;
}
