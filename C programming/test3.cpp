#include<stdio.h>
int main(void)
{
	int p6, chema, bio,maths,computer,marks;
	float avg;
	printf("Enter p6");
	scanf("%d", &p6);
	
	printf("Enter chema");
	scanf("%d", &chema);
	
	printf("Enter maths");
	scanf("%d", &maths);
	
	printf("Enter chema");
	scanf("%d", &bio);
	
	printf("Enter maths");
	scanf("%d", &computer);
	
	marks = chema + p6 + maths + bio + computer;
	avg = marks/5.0;
	
	if(avg > 90)
	{
		printf("Grade A");
	}
	else if (avg > 80)
	{
		printf("Grade B");
	}
	else if (avg > 70)
	{
		printf("Grade C");
	}
	else if (avg > 60)
	{
		printf("Grade D");
	}
	else if (avg > 50)
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade F");
	}
}
