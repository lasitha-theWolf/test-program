#include <stdio.h>
#define count 10
#define UNI "NUMBER"
int main(void)
{
	int num[count];
	int i;
	int j=1;
	int max=0;
	
//	printf("%s%100s\n", "element", "Value");
	
	for(i=0; i<10; i++){
		printf("Enter the %d %s :", j++, UNI);
		scanf("%d", &num[i]);
		if(num[i]>100 || num[i]<10){
			printf("Invalid number\n");
			--i;
			--j;
		}
	}
		for(i=0; i<10; i++){
		  if(num[i] > max){
		  	max = num[i];
		  }
		}
		printf("\n\nMax number is %7d", max);
		
		
		return 0;
	
}
