#include <stdio.h>
float findRadianValue(float angleInDegrees);
void printRadianValues(void);

int main(void)
{

	printfRadianValues();
	return 0;
}
float findRadianValue(float angleInDegrees)
{
	float pi, radian, degrees;
	pi = 22/7.0;
	radian = pi/180 * degrees;
	return radian;
}
void printRadianValues(void)
{
	float degree;
	float radian;
	printf("Angle(degrees)\t Angle(radians)\n");
	for(degree=100; degree<=200; degree=degree+20)
	{
	//	findRadianValue(degree);
		printf("%.2f\t%.2f\n", degree, findRadianValue(degree));
	}
	
}
