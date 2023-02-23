
#include <stdio.h>
int main(void)
{
	float temp[24], total=0, avg;
	
	int i;
	printf("Enter the temp :");
	
	for(i=0; i<24; i++){
		scanf("%f", &temp[i]);
		total = total + temp[i];
		
	}
	
	    printf("\n");
	    avg = total/24.0;
		printf("avg temp : %.2f\n", avg);
		
	
	return 0;
}
