#include <stdio.h>
#include <stdlib.h>
int main()
{
	float item[3] = {120.00,40.00,250.00};
	int qtySold[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Enter Quantity: ");
		scanf("%d", &qtySold[i]);
	}
	printf("Item array\n");
	for (i = 0; i < 3; i++)
	{
		printf("%.2f", item[i]);
	}
	printf("qtySold\n");
		for (i = 0; i < 3; i++)
	{
		printf("%.2f", qtySold[i]);
	}
	if (qtySold[i] < qtySold[i+1])
	{
		printf("Item wcich highest income: 2");
	}
	else if (qtySold[i+1] < qtySold[i+2])
	{
		printf("Item wcich highest income: 3");
	}
	else 
	{
		printf("Item wcich highest income: 1");
	}
	
	return 0;
}
