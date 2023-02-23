#include <stdio.h>
int main(void)
{
	int marks,max=0, min=100, marks1,marks2;
	printf("Enter the marks :");
	scanf("%d", &marks);
/*	while(marks>100 || marks<0){
		printf("marks are invalid\n");
		printf("Reenter the marks :");
	    scanf("%d", &marks);
	}
*/	
	while(marks !=-99)
	{
		while(marks>100 || marks<0){
			
		printf("marks are invalid\n");
		printf("Reenter the marks :");
	    scanf("%d", &marks);
			
	}
	if (marks>max){
		max= marks1;
	}
	if (marks<min){
		min= marks2;
	}
	printf("max marks is %d and min marks is %d", marks1, marks2);
}

return 0;
}
