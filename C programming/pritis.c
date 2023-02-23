#include<stdio.h>
 
  	
int main(void)
{
	float price,highbook,high,total;
  	int id;
  	int pages, i=0;
	int count=1, num=1;
	
	while(count<=3){
		printf("Enter %d book price :", num);
		scanf("%f", &price);
		printf("Enter %d book Id :", num);
		scanf("%d", &id);
		printf("Enter %d book pages :", num);
		scanf("%d", &pages);
		printf("\n");
		
		total =(float) price * pages;
		if(i<total){
			i = total;
			highbook = num; 
		}
		++num;
		++count;
	}
	
	printf("HIgh book is %d and its price is %.2f !!!!", highbook, i);
	
	return 0;
}
