#include <stdio.h>
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount); 

int main(void)
{
	int guest;
	float charge, discount, amount;
	printf("Enter the number of guests :");
	scanf("%d", &guest);
	printf("Charge per guest :");
	scanf("%f", &charge);
	
	discount = getDiscountPrice(guest,charge);
	amount = getAmount(guest, charge, discount);
	
	printf("Discount : %.2f", discount);
	printf("Amount to be paid : %.2f", amount);
}
float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
	float discount;
	if(noOfGuests > 200){
		discount = chargePerGuest * 0.1;
		
	}
	else{
		discount = 0;
	}
	return discount;
}
float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
	float amount;
	amount = (noOfGuests * chargePerGuest )- discount;
	return amount;
}
