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
	fscanf(cfPtr, "%s %s %lf", ID, name, &avgMarks);
	printf("%s %s %lf", ID, name, avgMarks);
	
	
}
