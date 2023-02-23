#include <stdio.h>
int stars(int a);
int main()
{
	int num,i,j;
	printf("Enter square number you want :");
	scanf("%d", &num);
	
	//square = stars(num);
	for(i=0; i<num; i++)
	{
		for(j=0; j<num; num++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
} /*
int stars(int a)
{
	a= a*a;
	return a;
} */
