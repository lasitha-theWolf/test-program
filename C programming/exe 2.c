#include <stdio.h>
#include <math.h>
int add(float n1, float N2);
int multiply1(float no1, float no2);
int multiply2(float no5, float no6);
int square(float squ);

int main(void)
{
	float result;
	float n1,n2,n3,n4;
	n1=3;
	n2=4;
	n3=5;
	n4=7;
	
	result = square(add(multiply1(n1,n2),multiply2(n3,n4)));
	printf("calculate the result %.2f", result);
	
	return 0;

}
int multiply1(float no1, float no2)
{
	float multi1;
	multi1 = no1 * no2;
	return multi1;
}
int multiply2(float no5, float no6)
{
	float multi2;
	multi2 = no5 * no6;
	return multi2;
}
int add(float N1, float N2)
{
	float addi;
	addi = N1 + N2;
	return addi;
}
int square(float squ)
{
	float square;
	square = pow(squ,2);
	return square;
}
