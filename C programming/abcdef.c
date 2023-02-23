#include <stdio.h>
#include <stdlib.h>
int main()
{
	float i, tot =0,s;
	int  in,q;
	printf("Enter The Item Number: ");
	scanf("%d", &in);
	while (in != -99)
	{
		printf("Enter The Quantity: ");
		scanf("%d", &q);
		switch(in)
		{
			case 1: i = 30;s=i*q;tot = tot+ s; break;
			case 2: i = 45;s=i*q;tot = tot+ s; break;
			case 3: i = 55;s=i*q;tot = tot+ s; break;
			default: printf("Invalid Item Number\n");
		}
		printf("Enter The Item Number: ");
		scanf("%d", &in);
	}
	printf("The total is: %.2f", tot);
	return  0;
}

