#include <stdio.h>
#include <assert.h>
#include <math.h>
float calPayment(char payment);
float calDiscount(int age);
void testDiscount();

int main(void)
{
	int age;
	char type;
	testDiscount(60);
	
	printf("Enter tha package type :");
	scanf(" %c", &type);
	printf("Enter patinet age :");
	scanf("%d", &age);
	
	printf("amount = %.2f",calPayment(type) - (fabs(calPayment(type) * calDiscount(age))) );
}
float calDiscount(int age)
{
	if (age >=60){
		return 0.1;
	}
	else{
		return 1;
	}
	
}
void testDiscount()
{
	assert(fabs( (calDiscount(60) * calPayment('S') ) <15000 ));
	assert(fabs( (calDiscount(60) * calPayment('C')) <50000 ));
}
float calPayment(char payment)
{
	if (payment == 'S'){
		return 15000;
	}
	else if(payment == 'C'){
		return 50000;
	}
	else if(payment == 'H'){
		return 30000;
	}
}
