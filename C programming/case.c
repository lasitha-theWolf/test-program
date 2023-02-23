#include <stdio.h>
float callincrement( float pay, char category);
int main ( void )
{
	char type;
	float salary, total, cal;
	
	printf( "Enter the salary :");
	scanf( "%f", &salary);
	printf("Enter employee type:");
	scanf(" %c", &type);

	cal = callincrement(salary, type);
        total = salary + cal;
	printf("Total payment :%.2f", total);

	return 0;

float callincrement(float pay, char category)
{
	float huuuu;
	switch(category)
	{
	  case 'A' : huuuu = pay * 0.04; break;
	  case 'B' : huuuu = pay * 0.06; break;
	  case 'C' : huuuu = pay * 0.08; break;
      default  : printf("Invalid category\n");
      
	}
    return huuuu;
	
