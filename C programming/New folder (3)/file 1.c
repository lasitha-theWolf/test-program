#include <stdio.h>
int main(void)
{
	int number = 10;
	
	FILE * fPtr;
	fPtr = fopen("number.dat", "w");
	
	if(fPtr == NULL){
		printf("Cannot create file\n");
		return -1;
	}
	fprintf(fPtr,"%d\n", number);
	fclose(fPtr);
	
	return 0;
}
