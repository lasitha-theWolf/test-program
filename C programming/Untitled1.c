#include<stdio.h> //display the float value

int main(void)
{
	int no1;
	int no2;
	float sum;
	float avg;
	
	printf("Enter the first number :"); //display enter the first number
	scanf("%d", &no1);    //input the no1     
	
	printf("Enter the second number :"); //display enter the second number
	scanf("%d", &no2);   //input the no2  
	
	sum =(no1 + no2);  //calculate the total of the marks 
	printf("Total mark is %f\n", sum);  //display the total
	avg = sum/2 ;  // calculate the average mark
	printf("Average mark is %.2f", avg); //display the average
	
	return 0;
} //end of program

