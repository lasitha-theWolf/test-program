#include<stdio.h>
#include <assert.h>

int main(void)
{
	int x;
	printf("Plas input a number :");
	scanf("%d", &x);
	
	assert(x>=10);
	printf("The value of x is %d", x);
	return 0;
}
