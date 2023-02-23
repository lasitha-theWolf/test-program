#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[15];
	printf("Enter the name :");               
	scanf("%s", &name);
	
	printf("%d\n", strlen(name));
	
	for(int r = 0; r < strlen(name); r++)
	{
		printf("%c\n", name[r]);
	}
	return 0;
}




 /* strlen  eken wenne apii string ekakata input kara ganna akuru gana ganan krala print krnawa*/
