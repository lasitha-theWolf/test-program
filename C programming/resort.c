/*C program to input the package type and number of people from the key board and calculate total cost*/
#include <stdio.h>
int main(void)
{
	int type, num, cost; //identify the user
	printf("Enter the Package Type : ");  
	scanf("%d", &type);    //get input
	
	if (type == 1)
	{
		printf("Enter number of people :");
		scanf("%d", &num);  //get input
		//calculations
		cost = num * 2000;
		printf("Horse ride cost is :%d", cost);
		
	}
	else if (type == 2)
	{
	
		printf("Enter number of people :");
		scanf("%d", &num);  //get input
		//calculations
		cost = num * 5000;
		printf("Scuba Diving cost is :%d", cost);
	}
	else if (type == 3)
	{
		printf("Enter number of people :");
		scanf("%d", &num);   //get input
		//calculations
		cost = num * 7000;
		printf("Water Rafting cost is :%d", cost);
		
	}
	else
	{
		printf("Error");
	}
	
	return 0;
	
	
}
