/* Date 19 Aug 2019
Program - 1
performing various arithmatic operations on two numbers
*/
#include<stdio.h>

int main()
{
	float a = 37;
	float b = 56;
	float c, d, e;
	float f;

	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;

	printf("Sum = %f \n", c);
	printf("Difference = %f \n", d);
	printf("Multiplication = %f \n", e);
	printf("Division = %f \n", f);

	float x,y,z;
	printf("Enter first number : ");
	scanf("%f", &x);
	printf("\nEnter second number : ");
	scanf("%f", &y);

	z = x + y;
	printf("\nSum is %f", z);

	z = x - y;
	printf("\nDifference is %f", z);

	z = x * y;
	printf("\nMultiplication is %f", z);

	z = x / y;
	printf("\nDivision is %f", z);

	return 0;
}

