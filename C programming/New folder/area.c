#include <stdio.h>
int main(void)
{
	char R, T, C, shape;
	float width, length, base, height, radius, area;
	
	printf("Input the first character of the shape :");
	scanf("%c", &shape);
	
	if (shape == 'R')
	{
	
	printf("You selected Rectangle\n\n");
	printf("Enter width :");
	scanf("%f", &width);
	printf("Enter length :");
	scanf("%f", &length);

	
	area = width * length;
	
	printf("Rectangle area is :%.3f", area);
}
	else if (shape == 'T')
	{
	printf("You selected Triangle \n\n");
	printf("Enter base :");
	scanf("%f", &base);
	printf("Enter height :");
	scanf("%f", &height);
	
	area = base * height / 2;
	printf("Triangle area is :%.3f", area);
		
		
	}
	else if (shape == 'C')
	{
	printf("You selected Circle \n\n");
	printf("Enter radius :");
	scanf("%f", &radius);
	
	area = 3.14 * radius * radius;
	
	}
	else
	{
		printf("Error");
	}
	return 0;
	
}
