#include <stdio.h>
int main(void)
{
	int a=12;
	int b =32;
	printf("a = %d and b = %d\n", a,b);
	{
		float a = 32.54;
		int c = 30;
		printf("Now a= %.2f and b = %d and c = %d\n", a,b,c);
	}
	printf("Finally a = %d and b = %d and c=\n", a,b);
	
}
