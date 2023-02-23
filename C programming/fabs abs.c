#include <stdio.h>
int main(void)
{
	float num;
	printf("Enter number :");
	scanf("%f", &num);
	
	printf("number is  %f\n\n", fabs(num));
	
	printf("number is  %f", abs(num));

}
