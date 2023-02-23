#include <stdio.h>
int main(void)
{
	char type;
	float price,total;
	int food,guest;
	
	printf("Enter the pakage type :");
	scanf(" %c" ,&type);
	
	printf("Enter Food type :");
	scanf("%d", &food);
	
	printf("Enter Number of guest :");
	scanf("%d", &guest);
	
	switch (type){
		case 'S' : price = 10000.00;break;
		case 'G' : price = 25000.00;break;
		default : printf("invalid");
	}
	switch (food){
		case 1 : food = 1000.00;break;
		case 2 : food = 2000.00;break;
		case 3 : food = 1500.00;break;
	    default : printf("invalid");
	}
	
	total = type + guest * food;
	
	printf("Total is : %.2f", total);
	
	
	return 0;
}
