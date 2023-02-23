#include <stdio.h>
int main ( void )
{
	char name[10];
	char id[10];
	int quantity, i;
	float price;
	float total;
	
	FILE * fPtr;
	fPtr = fopen ( "total.dat" , "w" );
	
	
	if ( fPtr == NULL )
	{
		printf( "Cannot open the file\n" );
		return -1;
	}
	fprintf(fPtr, "Item\t\tName\t\tQuantity(kg)\t\tPrice for 1kg\n");
	for (i = 0; i < 4; i++)
	{
		printf( "Input the item ID :" );
		scanf( "%s" , &id );
		printf( "Input name :" );
		scanf( "%s" , &name );
		printf( "Input quantity : " );
		scanf( "%d", &quantity );
		printf( "Input price for 1kg :" );
		scanf( "%f" , &price );
		
		fprintf(fPtr, "%s \t\t %s \t\t %s \t\t %d \t\t %.2f", id, name, quantity, price );
		printf( "\n" );
	}
	fclose ( fPtr );
	
	return 0;
	
}
