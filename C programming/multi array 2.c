#include<stdio.h>
int main()
{
	int numbers[2][3];
	
	numbers[0][0] = 500;
	numbers[0][1] = 2;
	numbers[0][2] = 4;
	numbers[1][0] = 21;
	numbers[1][3] = 31;
	numbers[1][2] = 43;
	
	int i,j;
	printf("Array elements\n");
	
	for(i=0; i<3; i++)
	{
		printf("------------------------\n");
		
		for(j=0;j<4;j++)
		{
			printf("%d\n", numbers[i][j]);
		}
	}
	return 0;
}
