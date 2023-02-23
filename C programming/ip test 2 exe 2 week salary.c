#include <stdio.h>
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

int main(void)
{
	int grade;
	float hours;
	printf("Enter the grade :");
	scanf("%d", &grade);
	printf("Enter total no of hours worked :");
	scanf("%f", &hours);
	
	calculateWeeklySalary(grade,hours);
	
	return 0;
	
}
float calculateWeeklySalary(int grade, float hrsWorked)
{
	float salary;
	float rate;
	if(grade == 1){
		rate = 100.00;
	}
	else if(grade == 2){
		rate = 200.00;
	}
	else if(grade == 3){
		rate = 300.00;
	}
	else{
		printf("Invaild Grade!\n");
	}
	salary = hrsWorked * rate;
	
	printDetails(grade, hrsWorked, salary);
	
}
void printDetails(int grade, float hrsWorked, float salary)
{
	printf("\nGrade is %d\nTotal no of hours worked %.2f\nWeekSalary is %.2f\n", grade, hrsWorked, salary);
	
}
