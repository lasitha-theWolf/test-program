//IT21215124
//lasitha heenkenda
//Group 2.1
//Malabe campus
/*  */
#include <stdio.h>
int main(void)
{
	int age;
	float balance;
	
	printf("enter the age :");
	scanf("%d", age);
	printf("enter the bank balance of a customer : ");
	scanf("%f", &balance);
	
	
	if (balance > 150000)
	{
		if (age <= 15){
			printf("Mountain Bicycle");
		}
		if(age > 20){
			printf("Laptop");
		}
	}
	if (balance < 150000){
		if (age <= 15){
			printf("Backpack ");
		}
		if(age > 20){
			printf("	Electric Kettle");
		}
	}
	return 0;
}
