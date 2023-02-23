#include <stdio.h>
#include <string.h>
   struct cum{
   	int account;
   	char name[10];
   	char type;
   	float amount;
   	
   }cum[5];
   
int main (void)
{
	float with, depos;
	float totalw = 0;
	float totald = 0;
	float total;
	int i;
	
	char manw[10], man2[10];
	for (i = 0; i < 5; i++)
	{
		printf("Enter account num:");
		scanf("%d", &cum[i].account);
		printf("Enter account name:");
		scanf("%s", &cum[i].name);
		printf("Enter account type:");
		scanf(" %c", &cum[i].type);
		printf("Enter account amount:");
		scanf("%f", &cum[i].amount);
		
		
		 if (cum[i].type == 'w'){
		 	printf("Enter the withdrawal amount :");
		 	scanf("%f", &with);
		 	total = (cum[i].amount - with);
		 	printf("Total price %.2f\n", total);
		 	if (with > totalw){
		 		totalw = with;
		 		strcpy(manw, cum[i].name);
		 	//	manw = cum[i].name;
			 }
		}
		else if(cum[i].type == 'd'){
			printf("Enter the deposit amount :");
			scanf("%f", &depos);
			total = cum[i].amount + depos;
			printf("total price %.2f\n", total);
			if (depos > totald){
				totald = depos;
				strcpy(man2, cum[i].name);
			}
			else 
			{
				printf("Invalid\n");
			}
		}
		puts("");
		
}
printf("max withdrwal amount person :%s\nmaxdeposit amount person :%s ", manw, man2);

return 0;
}
   
