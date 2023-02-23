#include <stdio.h>
int main(void)
{
	float price, total, subtotal;
	int iteam, Quantity;
	
	printf("Enter iteam :");
	scanf("%d", &iteam);
		if(iteam !=-99){
	
	   printf("Enter Quantity :");
	   scanf("%d", &Quantity);
}
	
	while(iteam != -99)
	{
		switch(iteam){
			case 1 : price = 30.00;
			         total =(float)price *  Quantity;break;
			case 2 : price = 45.00;
			         total = (float)price *  Quantity;break;
			case 3 : price = 30.00;
			         total = (float)price *  Quantity;break;
			default : printf("Error\n");
		} 
		subtotal = subtotal + total;
	printf("Enter iteam :");
	scanf("%d", &iteam);
	if(iteam !=-99){
	
	   printf("Enter Quantity :");
	   scanf("%d", &Quantity);
}
    
	}
	printf("Total Price to pay Rs :%.2f", subtotal);
	return 0;
}
