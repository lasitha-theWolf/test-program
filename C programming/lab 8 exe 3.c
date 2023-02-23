#include <stdio.h>
int main(void)
{
	float data[12];
	int i, count=1;
	float max=0, min=100;
	int maxmonth,minmonth;
	
	for(i=0; i<12; ++i)
	{
		printf("Enter the %d monthly avg rainfall :", count++);
		scanf("%f", &data[i]);
		
		if(data[i]>max)
		{
			max=data[i];
			maxmonth= i;
		}
		if(data[i]<min)
		{
			min=data[i];
			minmonth=i;
		}
	}
	printf("Max rainfall is %.2f and month is %d\nMin rainfall is %.2f ", max,maxmonth,min,minmonth);
	
	return 0;
}
