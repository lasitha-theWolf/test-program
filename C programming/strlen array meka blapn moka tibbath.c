#include <stdio.h>
#include <string.h>   //strlean eka ganna danne

int main(void)
{
	char name[15];
	int r;
	
	printf("Enter the name :");               /* strlen  eken wenne apii string ekakata input kara 
	                                                         ganna akuru gana ganan krala print krnawa*/
	scanf("%s", &name);
	
	printf("%d\n", strlen(name));
	
	for(r = 0; r < strlen(name); r++)
	{
		printf("%c\n", name[r]);
	}
	char name2[15];
	strcpy(name2, name);             /*name eke tibba tika name2 ekat copy wenwa*/
	printf("%s", name2);
	return 0;
}



/* strlen  eken wenne apii string ekakata input kara ganna akuru gana ganan krala print krnawa*/
