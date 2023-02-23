#include<stdio.h>
int main(void)
{
	int marks;
	printf("Enter the Marks :");
	scanf("%d", &marks);
	
	if(marks>=75)
	printf("A pass");
    else if(marks>=65)
	printf("B pass");
	else if(marks>=55)
	printf("C pass");
	else if(marks>=45)
	printf("S pass");
	else 
	printf("Faill"); 
	
	
	return 0;
}
