#include <stdio.h>
#define SIZE 5
void calc(int arr[], int size);
int main(void)
{
	int data[] = {10,20,30,40,50};
	cal(data,SIZE);
	int i;
	for(i=0; i<SIZE; i++){
		printf ("%d\n", data[i]);
	}
	
	
}
void cal(int arr[], int size)
{
	int k;
	for(k=0; k<size; k++){
		arr[k] = arr[k] * 2;
	}
}
