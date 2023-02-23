#include <stdio.h>
#include <string.h>

   struct employee{
   	char id[10];
   	char name[10];
   	int years;
   	float salary;
   }employee[3];

int main ( void )
{
	int count = 1;
	int i;
	float increment[3] = {0};
	
	for ( i = 0; i < 3; i++)
	{
		printf( "Enter %d employee ID : ", count );
		scanf( "%s", &employee[i].id );
		printf( "Enter %d employee name : ", count );
		scanf( "%s", &employee[i].name );
		printf( "Enter %d employee experience years : ", count );
		scanf( "%d", &employee[i].years );
		printf( "Enter %d employee salary : ", count );
		scanf( "%f", &employee[i].salary );
		++count;
		puts( "" );
	}
	printf( "Employee ID \t\t Name \t\t Increment\n" );
	printf( "-------------------------------------\n" );
	for ( i = 0; i < 3; i++)
	{
		if ( employee[i].years > 2 ){
			increment[i] =   employee[i].salary * 0.1;
			
		}
		printf( "%s \t\t\t %s \t\t %.2f\n", employee[i].id, employee[i].name, increment[i] );
		
	}
}
