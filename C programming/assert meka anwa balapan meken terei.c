#include <stdio.h>
#include <assert.h>

char findGrade(float mark);
void testGrade();

int main(void)
{
	testGrade();
	
	float mark;
	printf("Enter mark of the module :");
	scanf("%f", &mark);
	
	printf("Grade = %c\n", findGrade(mark));              // final return eka print krddi return wena eke int,char welin denna one
	
	return 0;
}
char findGrade(float mark)
{
	if(mark>=75)
	  return 'A';
	else if(mark>=45)
	  return 'B';
	else
	  return 'F';
}
void testGrade()
{
	assert(findGrade(85) == 'A');
	assert(findGrade(65) == 'B');
	assert(findGrade(10) == 'F');
}
