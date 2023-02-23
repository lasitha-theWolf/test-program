#include <stdio.h>
#include <assert.h>

int max(int, int);
void testMax();

int main()
{
	int num1, num2;
		
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	printf("\n");
	
	test_max();
	
	printf("Maximum value = %d", max(num1, num2));
	
	return 0;
}

int max(int x, int y)
{	
	if(x > y)
		return x;
	else
		return y;
}
void test_max()
{
	assert(max(3,4) == 4);
	assert(max(5,4) == 5);
}
