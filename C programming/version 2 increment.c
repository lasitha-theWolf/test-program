#include <stdio.h>
float calcIncrement(float salary, int noofYearsWorked);
float calcTotSalary(float salary, float increment);

int main(void)
{
	float salary;
	int years;
	
	printf("Enter Salary : ");
	scanf("%f", &salary);
	printf("Enter no of years worked :");
	scanf("%d", &years);
	
	calcIncrement(salary,years);
	return 0;
	
}
float calcIncrement(float salary, int noofYearsWorked)
{
	float increment, incr;
	
	if(noofYearsWorked > 2){
		incr = 0.1;
	}
	else{
		incr = 0;
	}
	increment = salary * incr;
	calcTotSalary(salary,increment);
}
float calcTotSalary(float salary, float increment)
{
	float totalSalary;
	totalSalary = salary + increment;
	printf("Increment is %.2f\nTotal Salary is %.2f", increment, totalSalary);
}

