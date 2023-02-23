#include <stdio.h>
int utto();

int main(void)
{
	int tot;
	tot = utto();
	printf("sum is %d", tot);
	return 0;
}
int utto()
{
	int sum, num1, num2;
	printf("Enter the two numbers :");
	scanf("%d %d", &num1, & num2);
	
	sum= num1 + num2;
	return sum;
}
