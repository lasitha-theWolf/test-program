#include <stdio.h>

int main ( void )
{
	float temp[2][3];
	int i, j;
	float avgTemp[2];
	int count1 = 1;
	for ( i = 0; i < 2; i++ )
	{
		
		for ( j = 0; j < 3; j++)
		{
			printf( "Enter %d city temp : ", count1 );
			scanf( "%f", &temp[i][j] );
			
		}
		avgTemp[i] = ( temp[i][0] + temp[i][1] + temp[i][2] ) / 3.0;
		++count1;
		puts( "" );
	}
	printf( "Colombo avg temp : %.2f\n", avgTemp[0] );
	printf( "Kandy avg temp : %.2f\n", avgTemp[1] );
	
	return 0;

}
