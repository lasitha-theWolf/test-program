#include <stdio.h>
#include <assert.h>
char grade(int g);
void test_grade();
int main(void)
{
	int mark;
	char display;
	printf("Enter the marks :");
	scanf("%d", &mark);
	
	display = grade(mark);
	test_grade(mark)
	printf(" %c", display);
	
	return 0;
}
char grade(int g)
{
	char result;
	if (g<=40)
	{
		result= 'f';
	}
	else if(g<50)
	{
		result='c';
	}
	else if(g<75)
	{
		result='b';
	}
	else if(g<=100)
	{
		result='A';
	}
	else {
		result='x';
	
	}
	return result;
}
void test_grade()
{
	assert(grade(mark<40 == 'f'));
	assert
}
