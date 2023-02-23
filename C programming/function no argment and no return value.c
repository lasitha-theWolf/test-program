#include <stdio.h>

int utto_meka_dipn();
int main(void)
{
	utto_meka_dipn();
	return 0;
}
int utto_meka_dipn() 
{
	int sum,num1,num2; 
	printf("Enter two numbers :");
	scanf("%d %d", &num1, &num2);
	
	sum=num1+num2;
	printf("Sum= %d", sum);
}
