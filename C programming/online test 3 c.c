#include <stdio.h>

int main (void)
{
	double salaries[5] = {-1};
	int count = 1;
	int num = 1;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Input the salary of employee %d :", count++);
		scanf("%lf", &salaries[i]);
		
		if (salaries[i] < 0)
		{
			printf("Please re-enter the amount\n");
			--i;
			--count;
		}
		
	}
	printf("\n\nEmployee number\t\tSalary\n");
	
	for(i = 0; i < 5; i++)
	{
		if (salaries[i] < 10000.00)
		{
			salaries[i] = salaries[i] + (salaries[i] * 0.1);
		}
		printf("%d%28.2f\n", num++, salaries[i]);
	}
	
	return 0;
	
}
