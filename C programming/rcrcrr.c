#include<stdio.h>
struct item {                            //make structure
	int itemNo;                   
	double price;
	int quantity;
}item1,item2;

int main(void)
{


printf("Enter Item No1 :" );          //display enter item no1
scanf("%d", &item1.itemNo);      //input item no1
printf("Enter price1 :" );              //display Enter price 1   
scanf("%lf", &item1.price);        //input item1 price
printf("Enter quantity1 :");         //display enter quantity1
scanf("%d", &item1.quantity);   //input item1 quantity

printf("Enter Item No2 :");      //display enter item no2
scanf("%d", &item2.itemNo);  //input item no2
printf("Enter price2 :");            //display Enter price 2
scanf("%lf", &item2.price);     //input item2 price
printf("Enter quantity2 :");       //display enter quantity2
scanf("%d", &item2.quantity);  //input item2 quantity

printf("ItemNo\tPrice\tQuantity\n");           
printf("   %d\t%.2lf\t   %d\n",item1.itemNo,item1.price,item1.quantity);   
printf("   %d\t%.2lf\t   %d\n",item2.itemNo,item2.price,item2.quantity);   

 return 0;
}

