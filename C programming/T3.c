#include <stdio.h>
int main(void)
{
	int i,j;
	for(i=97; i<=101; ++i){
		for(j=1; j<=i; ++j){
			printf(" %c", j);
		}
		printf("\n");
	}
}
