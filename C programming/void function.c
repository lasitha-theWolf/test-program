#include <stdio.h>
void printfsqu(int a);
int main(void)
{
	int num;
	printf("Enter side number :");
	scanf("%d", &num);
	
	printfsqu(num);
	
	return 0;
}
void printfsqu(int a)             // function eka returb karan nthi nisa void dala function ek hdnne
{
	int i,j;
	for(i=0; i<a; i++)
	{
		for(j=0; j<a; j++){
			printf("*");
		}
		printf("\n");
	}
}
