#include<stdio.h>
int main(void)
{
	int x =1;
	while(x <= 10){
		if (x == 6){
			++x;
			continue;
		}
		printf("%d", x);
		++x;
	}
}
