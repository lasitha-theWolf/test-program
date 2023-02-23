#include <stdio.h>
int main(void)
{
	float a, d, b, c;
	
	printf("Enter values of b:");
	scanf("%f", &b);
	
	printf("Enter values of d:");
	scanf("%f", &d);
	
	printf("Enter values of c:");
	scanf("%f", &c);
	
	a = (d * d) /(b*b- (1/2.0) * b * c);
	
	printf("Values of a is :%.2f", a);
	
	return 0;
}
