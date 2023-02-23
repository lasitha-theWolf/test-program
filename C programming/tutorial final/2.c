#include <stdio.h>
int main (void)
{
	int num[5] = {2,3,8,4,9};
	int i;
	
	for (i = 4; i >= 0; --i){
		printf("%d\t", num[i]);
	}
	return 0;
}
