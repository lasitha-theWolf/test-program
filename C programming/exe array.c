#include <stdio.h>
#include <math.h>
#define SIZE 5
int powe(int num[SIZE]);
int main(void)
{
	int i,k;
	int num[SIZE];
	printf("Enter the numbers :");
	
	
	for(i=0; i<SIZE; i++){
		scanf("%d", &num[i]);
	//	powe(num[i]);
	}
	powe(num[SIZE]);
	
	for(i=0; i<SIZE; i++){
		printf("%d * 2 = %d",num[i], num[k]);
		++k;
	}
	
	
}
int powe(int num[SIZE])
{
	int i;
	int k=0;
	for(i=0; i<SIZE; i++){
		
		num[k] = pow(num, 2);
		return num[k];
		k++;
	}
}
