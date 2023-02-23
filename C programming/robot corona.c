#include <stdio.h>

int main(void)
{
	char man,user;
	float temp;
	
	printf("Press 's' to start the robot :");
	scanf(" %c", &user);
	
	while(user != 'c'){
	
	printf("Is there is a man(yes/no) :");
	scanf(" %c", &man);
	
	if(man = 'y'){
		printf("Enter the tempreche :");
	    scanf("%f", &temp);
	    if(temp>100){
	    	printf("you have frever!!! you have to go to the hospital. \n");
		}
		else{
			printf("Your temp is good\n Now give you hand to put senitaiser\n");
			printf("You can go now Sir, have a nice day!!!\n");
			printf("Door is opening\n");
		}
	}
	
	
	
	while(man != 'y')
	{
		printf("Is there is a man(yes/no) :");
	    scanf(" %c", &man);
	}
		if(man = 'y'){
		printf("Enter the tempreche :");
	    scanf("%f", &temp);
	    if(temp>100){
	    	printf("you have frever!!! you have to go to the hospital. \n");
		}
		else{
			printf("Your temp is good\n Now give you hand to put senitaiser\n");
			printf("You can go now Sir, have a nice day!!!\n");
			printf("Door is opening\n\n");
		}
	}
	printf("do you want to off robot press 'c' or run again press any another key\n");
	scanf(" %c",user);
	

}
}

	

