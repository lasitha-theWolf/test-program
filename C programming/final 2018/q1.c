#include <stdio.h>
int main ( void )
{
	char type;
	float fee, total1 = 0, total2 = 0, total3 = 0;
	int count = 1;
	int hospitality = 0, marketing = 0, finace = 0;
	
	while (count <=100 )
	{
		printf( "Enter %d student Course Type : " , count++);
		scanf( " %c", &type );
		
		if ( type == 'h' || type == 'H' )
		{
			++hospitality;
			total1 = total1 + 1500.00;
		}
		else if ( type == 'm' || type == 'M' )
		{
			++marketing;
			total2 = total2 + 2000.00;
		}
		else if ( type == 'f' || type =='F' )
		{
			++finace;
			total3 = total3 + 2500.00;
		}
		else{
			printf( "Error in the course type!!\n");
			--count;
		}
	}
	printf( "Dilploma in Hospitality Management student No :%d and Earned price is %.2f\n", hospitality, total1 );
	printf( "Dilploma in marketing student No :%d and Earned price is %.2f\n", marketing, total2 );
	printf( "Dilploma in finace student No :%d and Earned price is %.2f\n" , finace, total3 );
	
	return 0;
	
}
