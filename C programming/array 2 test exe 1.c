#include <stdio.h>
#include <string.h>
   
   struct book{
   	char id[10];
   	char titel[10];
   	int copies;
   	int reader;
   }book[3];
   
int main ( void )
{
	int i;
	int count = 1;
	int max = 0;
	char popular[] = {0};
	
	for (i = 0; i < 3; i++)
   {
   	   printf( "Enter %d book ID :" , count);
   	   scanf( "%s", &book[i].id);
   	   printf( "Enter %d book title :" , count);
   	   scanf( "%s", &book[i].titel);
   	   printf( "Enter %d book copies:" , count);
   	   scanf( "%d", &book[i].copies);
   	   printf( "Enter %d book readers :" , count);
   	   scanf( "%d", &book[i].reader);
   	   ++count; 
   	
   }
   for ( i = 0; i < 3; i++ )
   {
   	  if ( book[i].reader > max)
   	  {
   	  	max = book[i].reader;
   	  	strcpy(popular,book[i].titel);
   	  	
		 }
   }
   printf( "Name of the book : %s", popular);
   printf( "Number of readers : %d", max);
   
   return 0;
}
