#include<stdio.h>
int main(void)
{
	int count1,count2,sum;
	int mod;
	int p=0;
	int i=0;
	count1=1;
		
	while(count1<=3)
	{
		count2=1;
		sum=0;
		printf("Student %d\n",count1);
		while(count2<=4)
		{
			printf("Enter the marks for module %d : ", count2);
			scanf("%d", &mod);
			
			sum=sum+mod;
			count2=count2+1;
			if(sum>p)
			{
				p=sum;
				i=count1;
			}
			
		}
		printf("Total is %d\n\n", sum);
	
		count1=count1+1;
	}
	printf("Who got the highest marks: student %d\n", i);
	printf("The highest mark is %d", p);
	return 0;
}
