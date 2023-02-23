#include<stdio.h>
#define size 12
int main(void)
{
	int a[size];
	int i;
	int total = 0;
	
	for(i=0; i < size; i++){
		printf("a[i] =");
		scanf("%d", &a[i]);
	}
	for(i=0; i<size; i++){
		total = total + a[i];
		
	}
	printf("Total is %d", total);
	
	return 0;
}
