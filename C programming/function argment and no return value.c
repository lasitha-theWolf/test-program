#include<stdio.h>

int utto(int num1, int num2);

int main(void)
{
	int a, b;
	printf("Enter two number :");
	scanf("%d %d ", &a, &b);
	
	utto(a,b);
	return 0;
	
}
int utto(int num1, int num2)
{
	int sum;
	sum= num1+num2;
	printf("sum is %d",sum);
}
