#include <stdio.h>
int main(void)
{
	int num, range, i, multi;
	
	printf("Enter the number :");
	scanf("%d", &num);
	
	printf("Enter the range :");
	scanf("%d", &range);
	printf("\n\n");
	
	for(i=1; i<=range; ++i)
	{
		multi = num * i;
		printf("%d x %d = %d\n\n", num, i, multi);
	}
	return 0;
}
