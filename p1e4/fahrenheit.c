#include <stdio.h>

int main(void)

{
	float a, b;
	printf ("Dwse mia thermokrasia se Celsius:");
	scanf ("%f", &a);
	b = ((a/5)*9)+32;
	printf ("H thermokrasia se Fahrenheit einai: %f", b);
	return 0;
}
