#include <stdio.h>
#include <stdlib.h>
int main()
{
	int seat[5] = {0};
	int i = 0;
	printf("Please input the seat number(1 - 10): ");
	scanf("%d", &seat[i]);
	while (seat[i] != -1)
	{
		if (seat[i] < 0 || seat[i] > 10)
		{
			printf("Sorry. Please input a valid seat number\n");
		} 
		int p = 0;
		while (p < i)
		{
			if (seat[p] ==  seat [i])
			{
				printf("Sorry.. The Seat %d is reseved\n", seat[i]);
			}
			p++;
		}
		i++;
		printf("Please input the seat number(1 - 10): ");
		scanf("%d", &seat[i]);
	}
	return 0;
}
