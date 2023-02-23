//IT21215124
//lasitha heenkenda
//Group 2.2
//Malabe campus

/* C program to find the maximum rainfall of each city*/

#include <stdio.h>   

int main ( void )
{
	float rain[2][3];       //declaring array and variables
	int i, j;
	float maxRain[2];
	int count1 = 1;
	int count2 = 1;
	int count3 = 1;
	
	for ( i = 0; i < 2; i++ )       //loop for get input
	{
		count2 = 1;
		for ( j = 0; j < 3; j++ )
		{
			printf( "Enter %d city %d  rainfall :", count1, count2 );   
			scanf( "%f", &rain[i][j] );                                           //input rainfalls
			++count2;
		}
		puts( "" );
		++count1;
	}
	float m = 0;
	for ( i = 0; i < 2; i++ )            //loop for find maxrain fall
	{
	//	float max = 0;
		for ( j = 0; j < 3; j++ )
		{
			if ( rain[i][j] > m)
			{
				m = rain[i][j];
			}
			maxRain[i] = m;
			
		}
		
	}
	for ( i = 0; i < 2; i++ )
	{
		printf( "%d city maximum rainfall: %.2f\n", count3++, maxRain[i] );  //display output
	}
	
	
	return 0;  //end of the program
	

	
}
