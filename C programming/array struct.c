#include <stdio.h>

int book[3];
  struct book{
  	char id[10];
  	char title[10];
  	int copies;
  	int reader;
  	
  }book[0], book[1], book[2];
int main ( void )
{
	int count = 1;
	char high[10];
	int i, people;
	for (i = 0; i < 3; i++)
	{
		printf( "Enter %d book ID :", count);
		scanf( "%s", &book[i].id);
		printf( "Enter %d book title :", count );
		scanf( "%s", &book[i].title);
		printf( "Enter %d book copies :", count );
		scanf( "%s", &book[i].copies);
		printf( "Enter %d book reader :", count );
		scanf( "%s", &book[i].reader);
		++count;
		
	}
	if ( book[0].reader > book[1].reader )
	{
		high = book[0].title;
		people = book[0].reader;
	}
	if ( book[2].reader > book[0].reader )
	{
		high = book[2].title;
		people = book[2].reader;
	}
	if ( book[1].reader > book[2].reader )
	{
		high = book[1].title;
		people = book[1].reader;
	}
	printf( "Name of the book : %s", high );
	printf( "Number of readers : %d", people );
	
	return 0;
	
	
}
