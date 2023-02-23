#include <stdio.h>
#include <string.h>
int main ( void )
{
	int rainfall[3][4];
	int i, j, x, k = 0;
	int count1 = 1;
	int count2 = 1;
	int count3 = 1;
	int maxRainfall[3][4] = {0};
	
	for ( i = 0; i <4; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf( "Enter %d city %d day rainfall :", count1, count2 );
			scanf( "%d", &rainfall[j][i] );
			++count2;
			
			if ( rainfall[j][i] > maxRainfall[j][i] )
			{
				strcpy(maxRainfall[j][i] ,rainfall[j][i]);
				
			}
		}
		puts( "" );
		++count1;
	}
	
	for ( k = 0; k <= 4; k++){
		printf( "%d city maximun rainfall of each days : %d\n", count3++, maxRainfall[k] );
	}
	return 0;
}
