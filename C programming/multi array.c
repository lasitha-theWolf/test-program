#include <stdio.h>
int main()
{
	int arrays[3][4]= {{21,3,31,23} , {21,3,2,4}, {23,4,312,23}};
	
	int i,j;
	printf("Array elements\n");
	
	for(i=0; i<3; i++)
	{
		printf("------------------------\n");
		
		for(j=0;j<4;j++)
		{
			printf("%d\n", arrays[i][j]);
		}
	}
	return 0;
}
