#include <stdio.h>
int main(void)
{
	int num;
	printf("Enter Number :");
	scanf("%d", &num);
	
	while(num<0){
		printf("Invalid Number.");
		printf("Enter number :");
		scanf("%d", &num);
	}
	
	int t=num;
	int i,j,x,u=1;
	
	while(u<=t)
	{
		x=t-(t-u);
	for(i=1; i<=x; i++)
	{
		for(j=1; j<=x; j++){
			printf("%d", x);
		}
		printf("\n");
	}
	   ++u;
	   printf("\n");
	}
	return 0;
}
