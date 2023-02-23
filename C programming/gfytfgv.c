#include <stdio.h>
int main(void)
{
	int marks,marks1=0, marks2;
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
	if (marks>marks1){
		marks1= marks;
	}
	if (marks<marks2){
		marks2= marks;
	}
	printf("Enter the marks :");
	scanf("%d", &marks);
	
}
    printf("max marks is %d and min marks is %d", marks1, marks2);

    return 0;
}
