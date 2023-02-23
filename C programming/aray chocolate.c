#include <stdio.h>
int main ( void )
{
	float size[3][5] = {0};
	int i, j;
	int count1 = 1;
	int count2 = 1;
	int count3 = 1;
	float avgSize[3] = {0};
	
	for ( i = 0; i < 3; ++i )
	{
		count2 = 1;
		for ( j = 0; j < 5; ++j )
		{
			printf( "Enter %d machine %d ball size :" , count1, count2 );
			scanf( "%f", &size[i][j] );
			
			++count2;
		}
		puts( "" );
		avgSize[i] = ( size[i][0] + size[i][1] ) / 2.0; 
		++count1;
	}
	for ( i = 0; i < 3; i++)
	{
		printf( "%d machine avg size :%.2f\n", count3++, avgSize[i]);
	}
	return 0;
}
