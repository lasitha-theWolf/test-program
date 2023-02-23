#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int qualityPoints(int m)
{
	if (m < 60)
	{
		return 0;
	}
	else if (m < 70)
	{
		return 1;
	}
	else if (m < 80)
	{
		return 2;
	}
	else if (m < 90)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}
void test_average()
{
	assert(qualityPoints(20)==0);
	assert(qualityPoints(75)==2);
	assert(qualityPoints(85)==3);
	assert(qualityPoints(93)==4);
	assert(qualityPoints(66)==1);
	//boundry conditions
	assert(qualityPoints(0)==0);
	assert(qualityPoints(60)==1);
	assert(qualityPoints(70)==2);
	assert(qualityPoints(80)==3);
	assert(qualityPoints(90)==4);
	assert(qualityPoints(100)==4);
}
int main()
{
	int marks;
	printf("Enter Your Marks: ");
	scanf("%d", &marks);
	assert(marks >= 0 && marks <= 100);
	
	printf("The Average: %d", qualityPoints(marks));
	return 0;
}

