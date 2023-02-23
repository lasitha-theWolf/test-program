#include <stdio.h>
int main (void)
{
	int num;
	printf("Enter the number :");
	scanf("%d", &num);
	
	if (num < 0){
		num = num * (-1);
	}
	printf("Number is : %d", num);
}
