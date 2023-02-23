#include<stdio.h>
int main(void)
{
	char score;
	printf("Enter the score :");
	scanf("%c", &score);
	
	switch(score)
{
		
	case 'a' : printf("Congulation you are the batch top");break;
	case 'b' : printf("you have second pass");break;
	case 'c' : printf("you have third pass");break;

	default  : printf("you need to improve");
	
	}

  return 0;
}

