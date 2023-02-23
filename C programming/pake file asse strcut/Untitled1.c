#include <stdio.h>
  struct products{
  	int itemCode;
  	char description[10];
  	float price;
  	float quantity;
  	
  }products[5];
int main (void)

{
	int count1 = 1;
	int i;
	FILE * ptr;
	
	ptr = fopen("item.dat", "w");
	
	if (ptr == NULL){
		printf("File not open...");
		return -1;
	}
	for ( i = 0; i < 5; i++){
		printf("Enter %d item code :", count1 );
		scanf("%d", &products[i].itemCode);
		
		printf("Enter %d description :", count1 );
		scanf("%s", &products[i].description);
		
		printf("Enter %d unit price :", count1 );
		scanf("%f", &products[i].price);
		
		printf("Enter %d quantity :", count1 );
		scanf("%d", &products[i].quantity);
		++count1;
			
	}
	fprintf(ptr,"Item code\t\tdescription\t\tunit price\t\tquantity\n\n");
	
	for (i = 0; i < 5; i++)
	{
		fprintf(ptr,"%d \t\t%s \t\t %.2f\t\t%d\n",products[i].itemCode, products[i].description,products[i].price,products[i].quantity);
	}
	return 0;
	
	
}
