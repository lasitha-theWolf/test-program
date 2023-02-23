#include <stdio.h>
int main ( void )
{
	int mat[4][4] = {{5,7,8,10}, {9,3,0,6}, {8,1,9,2}, {4,7,2,1}};
	int mat2[4][4] = {{2,2,1,3}, {8,1,3,1},{1,2,2,4},{3,1,1,2}};
	int total[4][4];
	int i, j;
	
	for (i = 0; i <=3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			printf( "%d\t %15d" , mat[i][j], mat2[i][j] );
			
			
			total[i][j] = mat[i][j] + mat2[i][j];
			printf( "\t\t\t\t\t\t\t%d", total[i][j] );
		}
		printf( "\n" );
	}
	return 0;
}
