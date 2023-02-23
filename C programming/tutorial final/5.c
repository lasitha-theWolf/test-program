#include <stdio.h>

int main (void)
{
	
	int type;
	char range;
	float total = 0;
	char card;
	float price;
	int quantity;
	
	printf("Enter the type :");
	scanf("%d", &type);
	
	while(type != -1){
		
		printf("Enter the range :");
		scanf(" %c", &range);
		printf("Enter the quantity :");
		scanf("%d", &quantity);
		
		if (type == 1 && range == 'L'){
			
			price = 1720.00 * quantity;	
		}
		else if (type == 1 && range =='M'){
			price = 975.00 * quantity;
		}
		else if (type == 2 && range == 'L'){
			price = 1820.00 * quantity;
		}
		else if(type == 2 && range == 'M'){
			price = 1000.00 * quantity;
		}
		else {
			printf("Invalid input\n");
		}
		total = total + price;
		printf("Total %.2f\n", total);
		puts("");
		
		printf("Enter the type :");
	    scanf("%d", &type);
	}
	printf("Enter the card type :");
	scanf(" %c", &card);
	
	switch (card){
		
		case 'C' : total = total - (total * 0.2); break;
		case 'L' : total = total - (total * 0.2); break;
		case 'O' : total = total - (total * 0.2); break;
		default : total = total;
	}
	
	printf("total price pay :%.2f", total);
	
	
	
	
	
	
	return 0;
	
	
}
