#include <stdio.h>
int main(void)
{
	int mark[5];
	
	printf("Enter  5 marks :");
	scanf("%d %d %d %d %d", &mark[0],&mark[1],&mark[2],&mark[3],&mark[4]);
	
	printf("marks are :\n\n %d%d%d%d%d", mark[0],mark[1],mark[2],mark[3],mark[4]);
	
	return 0;
}
