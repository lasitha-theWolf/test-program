#include <stdio.h>

int main ( void )
{
	int box[4][3];
	int i, j;
	int count1 = 1;
	int count2 = 1;
	int count3 = 1;
	int volume[4];
	for ( i = 0; i < 4; ++i )
	{
		count2 = 1;
		for ( j = 0; j < 3; j ++)
		{
			
			printf( "Enter %d box %d : ", count1, count2 );
			scanf( "%d", &box[i][j] );
			++count2;
			
		}
		volume[i] = box[i][0] * box[i][1] * box[i][2];
		puts( "" );
		++count1;
	}
	for ( i = 0; i < 4; i++ )
	{
		printf( "%d box volume : %d\n", count3, volume[i] );
	}
	return 0;
	
	
}
