#include <stdio.h>
int main(void)
{
	int data[5][5];
	int i,j;
	 data[0][0] = 10;
	 data[0][1] = 20;
	 data[0][2] = 30;
	
	 data[1][0] = 40;
	 data[1][1] = 50;
	 data[1][2] = 60;
	
	 data[2][0] = 70;
	 data[2][1] = 80;
	 data[2][2] = 90;
	
	 data[3][0] = 100;
	 data[3][1] = 120;
	 data[3][2] = 130;
	
	
	for(i=0; i<4; i++){
		
		for(j=0; j<3; j++){
			printf("%d\t", data[i][j]);
		}
		printf("\n");
	}
	
}
