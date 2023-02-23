#include <stdio.h>

int main ( void )
{
	int marks[5][2] = {0};
	int i, j;
	float finalMark[5] = {0};
	int count1 = 1;
	int count2 = 1;
	int count3 = 1;
	
	for ( i = 0; i < 5; ++i )
	{
		count3 = 1;
		for ( j = 0; j < 2; ++j )
		{
			
			printf( "Enter %d student %d components mark :" , count2, count3 );
			scanf( "%d", &marks[i][j] );
			++count3;
		}
		puts( "" );
		++count2;
	}
	for ( i = 0; i < 5; ++i )
	{
			finalMark[i] = (float)( marks[i][0] * 0.4 ) + ( marks[i][1] * 0.6 ); 
			printf( "%d student final mark : %.2f\n", count1++, finalMark[i] );
		
	}
	return 0;
	
	
}
