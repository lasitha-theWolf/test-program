#include<stdio.h>


	struct book{
		int bookID;
		double price;
		char noOfpage;
		double editionNO;
	}book1; 
	int main()
	{
		book1.bookID=92123923;
		book1.price=350.00;
		book1.noOfpage=200;
		book1.editionNO=8;
		printf("Book 1 book ID : %d\n", book1.bookID);
		printf("Book 1 price : %.2f\n", book1.price);
		printf("Book 1 no of pages : %d\n", book1.noOfpage);
		printf("Book 1 edition no : %d\n", book1.editionNO);
		
		
	
	
	return 0;
	
	
}
