#include<stdio.h>
int main(void)
{
	int roomNo, days,card;
	char board;
	float amount, total, discount;
	
	printf("Enter Type of room :");
	scanf("%d", &roomNo);
	
	while(roomNo != -1){
	
	    switch (roomNo){
	    	case 1 : printf("Enter Accommodation Basis (F/H) : ");
	    	         scanf(" %c", &board);
	    	        if (board == 'F'){
	    	        	amount = 25555;
					}
					if (board == 'H'){
						amount = 17250;
					}
					break;
			case 2 : printf("Enter Accommodation Basis (F/H) : ");
	    	         scanf(" %c", &board);
	    	        if (board == 'F'){
	    	        	amount = 17500;
					}
					if (board == 'H'){
						amount = 12250;
					}
					break;
			case 3 : printf("Enter Accommodation Basis (F/H) : ");
	    	         scanf(" %c", &board);
	    	        if (board == 'F'){
	    	        	amount = 9000;
					}
					if (board == 'H'){
						amount = 7250;
					}break;
			
			default : printf("Invalid Type of room");
		}
			printf("Enter No of days :");
			scanf("%d", &days);
			printf("Enter Reward Card Type ( G, S, B ) :");
			scanf(" %c", &card);
			if(card == 'G'){
				discount = 12.5/100;
			}
			if(card == 'S'){
				discount = 11.5/100;
			
			}
			if(card == 'B'){
				discount = 9.5/100;
			}
			total = (amount * days) - (amount * days * discount) ;
			
			
			
			
			printf("Total is %.2f\n\n", total);	 
	    	
		
		
		}
			
		
	
	
	
	
	
	
}
