#include <stdio.h>
float adder(float m, float n)
{
	float a;
	a = m + n;
	return a;
}
float multiply1(float c, float d)
{
	float m, n;
	m = c * d;
	return m;
}
float multiply2(float e, float f)
{
	float m, n;
	n = e * f;
	return n;
}
float square(float a)
{
	float s;
	s = a * a;
	return s;
}
int main()
{
	float no1,no2,no3,no4;
	no1 = 3;//,no3,no4
	no2 = 4;
	no3 = 5;
	no4 = 7;
	printf("The Answer is: %.2f", square(adder(multiply1(no1,no2),multiply2(no3,no4))));
	return 0;
}

