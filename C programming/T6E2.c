//write a function to calculate area of a circle and the return the area of the circle
#include <stdio.h>
float calArea(float r);

int main()
{
	float r,result;
	
	printf("Enter radius :");
	scanf("%f",&r);
	
	result=calArea(r);//fuction calling
	printf("The answer is %.2f\n",result);
	
	return 0;
}

float calArea(float r)//function implementation
{
	float Area;
	Area=22/7*r*r;
	return Area;
}

