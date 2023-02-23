#include <stdio.h>
#include <assert.h>
char grade(int g);
int test_grade(int mark_true);
int main(void)
{
	int mark;
	char display;
	printf("Enter the marks :");
	scanf("%d", &mark);
	
	display = grade(mark);
	printf(" %c", display);
	
	return 0;
}
char grade(int g)
{
	char result;
	if (g<=100)
	{
		result= 'A';
	}
	else if(g<75)
	{
		result='B';
	}
	else if(g<60)
	{
		result='C';
	}
	else if(g<40)
	{
		result='F';
	}
	else {
		result='x';
	
	}
	return result;
}
