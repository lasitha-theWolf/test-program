#include <stdio.h>

float calPayment( int type, float weight, char deliver );
int main ( void )
{
	int type;
	float kilo;
	char deliver;
	float totalPayment;
	printf( "Enter service Type : " );
	scanf( "%d" , &type );
	printf( "Enter the kilo you want :" );
	scanf( "%f" , &kilo);
	printf( "Do you want deliver (Y/N) :" );
	scanf( " %c" , &deliver );
	
	totalPayment = calPayment( type , kilo, deliver);
	
	printf( "The type is %d\n Wegiht is %.2f\n Deliver :%c \n Total is :::: %.2f ", type, kilo, deliver, totalPayment);
	
	
}
float calPayment( int type , float weight, char deliver )
{
	float payment;
	float total;
	if ( type == 1)
	{
		payment = 750.00 * weight;
	}
	else if ( type == 2)
	{
		payment = 500.00 * weight;
	}
	else if ( type == 3)
	{
		payment = 350.00 * weight;
	}
	else 
	   printf( "Erro\n" );
	   
	if ( deliver == 'Y')
	{
		total = payment + 1000.00;
	}
	else if ( deliver == 'N')
	{
		total = payment;
	}
	else {
		printf( "Error in the deliver\n" );
	}
	   
	return total;
}

