#include <stdio.h>
#include <math.h>
int cricleArea(float r);
int main(void)
{
	float radius, area;
	
	printf("Enter the radius value :");
	scanf("%f", &radius);
	
	area = cricleArea(radius);
	printf("Area is %.2f", area);
	
	return 0;
}
int cricleArea(float r)
{

	float calculate;
	calculate = 22/7.0 * pow(r,2); 
	return calculate;
}
