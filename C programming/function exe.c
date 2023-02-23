#include <stdio.h>
int max(int c, int d);
int main()
{
	int a,b,larger;
	printf("Enter the two numbers :");
	scanf("%d %d", &a, &b);
	
	larger = max(a,b);
	printf("Enter largest number is %d", larger);
	
	return 0;
}
int max(int c, int d)
{
	if(c>d){
		return c;
	}
	else
	{
		return d;
	}
}
