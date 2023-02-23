#include <stdio.h>

int main(){
	
	int value =2;
	switch(value +1){
		case 1:
			printf("1\n");
		break;
		
		case 2:
			printf("2\n");
		break;
		case 3:
			printf("3\n");
		
		default:
			printf("paka\n");	
	}
	do{
		printf("sad\n");
		value++;
	}while(value<5);
	return 0;
	
}
