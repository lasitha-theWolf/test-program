#include <stdio.h>
int main()
{
	int numbers[3][2][4]=
	        {
	        	{{1,2,3,4} , {12,23,43,12} },
	        	{{123,32,12,3} , {23,12,343,43}},
	        	{{23,4,3,1}, {12,43,5,3}}
				
			};
			
		int i,j,k;
		printf("Array Elements\n");
		for(i=0; i<3; i++)
		{
			for(j=0; j<2;j++)
			{
				printf("-------------------\n");
				for(k=0;k<4;k++)
				{
					printf("%d\n", numbers[i][j][k]);
				}
			}
		}
}
