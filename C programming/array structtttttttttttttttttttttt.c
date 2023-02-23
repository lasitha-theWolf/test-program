#include <stdio.h>
  struct product{
  	char id[10];
  	char name[10];
  	float price;
  	int quantity;
  }product[4];
  
int main ( void )
{
	int count = 1;
	float amount[4];
	int i;
	for ( i = 0; i < 4; i++)
	{
		
		printf( "Enter %d product ID : ", count );
		scanf( "%s", &product[i].id ); 
		printf( "Enter %d product name : ", count );
		scanf( "%s", &product[i].name );
		printf( "Enter %d product price : ", count );
		scanf( "%f", &product[i].price );
		printf( "Enter %d product quantity : ", count );
		scanf( "%d", &product[i].quantity );
		++count;
		puts( "" );
	}
	printf( "Product ID\t\t\t Name\t\t\t Amount\n" );
	printf( "=========================================================\n" );
	for ( i = 0; i < 4; i++ )
	{
		amount[i] = (float)( product[i].price * product[i].quantity );
		printf( "%s %30s %30.2f\n", product[i].id, product[i].name, amount[i] );
	}
	return 0;
}
