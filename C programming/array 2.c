#include <stdio.h>
int main(void)
{
	int n=5;
	int numbers[n];
	
	numbers[0]=2;
	numbers[1]=4;
	numbers[2]=6;
	numbers[3]=8;
	numbers[4]=10;
	
	int i;
	printf("Array elements \n");
	for(i=0; i<n; i++)
	   printf("%d\n\n", numbers[i]);
	   
	numbers[2]=500;
	printf("Array elements \n");
	for(i=0; i<n; i++)
	   printf("%d\n\n", numbers[i]);
	
	   
	   return 0;
}
