#include <stdio.h>
int main(void)
{
	int package,guests;
	char food;
	float price1,price2,amount;
	
	printf("Choose your Package type :");
	scanf("%d", &package);
	
	switch(package)
	{
		case 1: package=='1';
				price1==15000;
				break;
		case 2: package=='2';
	         	price1==30000;
			    break;
		default: printf("Invalid");	    
	}
	printf("Enter the food type (S/D/L):");
	scanf(" %c", &food);
	

	if(food=='S')
		{
		price2==1500;
	}
		
	if(food=='D')
	 {
		   price2==3000;
	}
	if(food=='L')
	 {
		   price2==2500;
	}
		
	

	printf("Enter the number of guests:");
	scanf("%d", &guests);
	
	amount = (float)(price1) + (guests*price2);
	printf("Bill amount is %.2f", amount);
	return 0;	
}
