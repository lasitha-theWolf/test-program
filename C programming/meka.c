#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m=0,i=0,p,pn,t,s;
	printf("Enter The Number of Players: ");
	scanf("%d", &p);
	while(i <= p)
	{
		int k = 1,sm = 0;
		printf("Enter Player Number: ");
		scanf("%d", &pn);
		while (k <= 4)
		{
			printf("Enter score %d: ",k);
			scanf("%d", &s);
			sm = sm + s;
			k++;
		}
		if (sm > m)
		{
			m = sm;
			t = pn;
		}
		i++;	
	}
	printf("The Winner: player%d\n", t);
	printf("The Marks: %d\n", m);
	return 0;
}

