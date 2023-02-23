#include <stdio.h>
#define SIZE 10

int main (void)
{
	int testMarks[SIZE] = {-1};
	int count = 1;
	int i;
	
	
	for (i = 0; i<SIZE; i++)
	{
		printf("Input mark %d :", count++);
		scanf("%d", &testMarks[i]);
		
		if (testMarks[i] < 0 || testMarks[i] > 100)
		{
			printf("Invaild Mark, Re-enter\n");
			--i;
			--count;
		}
		
	}
	
	printf("Passed marks : ");
	for (i = 0; i < SIZE; i++)
	{
		if (testMarks[i] >= 50){
		
		printf("%3d", testMarks[i]);
	}
	}
	
	return 0;
}
