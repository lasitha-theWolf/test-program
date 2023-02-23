#include <stdio.h>
int main(void)
{
	int type, q;
	float total, subtotal=0;
	
	printf("Enter Burger Type :");
	scanf("%d", &type);
	
	while(type<=3 && type>=1){
		
		printf("Enter Quantity :");
		scanf("%d", &q);
		
		switch (type){
			case 1 :  total = (float) 500.00 * q; break;
			case 2 :  total = (float)550.00 * q; break;
			case 3 :  total = (float)600.00 * q; break;
			default : printf("Error");
			
		}
		subtotal = subtotal + total;
		printf("Total Price  Rs: %.2f\n\n", total);
		printf("Enter Burger Type : ");
	    scanf("%d", &type);
		
		
		
		
		
	}
//	printf("Total Price  Rs: %.2f", subtotal);
	
	return 0;
	
}
