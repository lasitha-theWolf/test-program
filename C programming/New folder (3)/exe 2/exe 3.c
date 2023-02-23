#include <stdio.h>
int main(void)
{
	char ID[10];
	char name[ 30];
    double avgMarks;
    int i;
    FILE *cfPtr;
    cfPtr = fopen("marks.dat", "r");
    
    if(cfPtr == NULL)
    {
    	printf("FIle cannot open");
    	return -1;
	}
	
	for(i = 1; i < 2; ++i)
	{
		printf("Pls enter student Id : ");
		scanf("%s", ID);
		printf("Pls enter name :");
		scanf("%s", name);
		printf("Pls enter marks :");
		scanf("%lf", &avgMarks);
		
		fprintf(cfPtr, "%s %s %.2f", ID, name, avgMarks);
		
		
	}
	fclose(cfPtr);
	return 0;

}
