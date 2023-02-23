#include <stdio.h>
int main ( void )
{
	char book[3][4];
	int i, j = 0;
	int count = 1;
	char high[] = {0};
	char people[] = {0};
	
	for (i = 0; i < 3; i++ )
	{
		    j = 0;
			printf( "Enter %d book ID :" , count );
			scanf( "%s", &book[i][j] );
			j++;
			printf( "Enter %d book Titel :" , count );
			scanf( "%s", &book[i][j] );
			j++;
			printf( "Enter %d book copies :" , count );
			scanf( "%s", &book[i][j] );
			j++;
			printf( "Enter %d book readers :" , count );
			scanf( "%s", &book[i][j] );
			++count;
			printf( "\n");
			
		
	}
	if ( book[0][3] > book[1][3] )
	{
		high = book[0][1];
		people = book[0][3];
	}
	if ( book[2][3] > book[0][3] )
	{
		high = book[2][1];
		people = book[2][3];
	}
	if ( book[1][3] > book[2][3] )
	{
		high = book[1][1];
		people = book[1][3];
	}
	printf( "Name of the the book : %s\n", high );
	printf( "Number of readers : %d", people );
	
	return 0;
}
