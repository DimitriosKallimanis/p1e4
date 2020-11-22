#include <stdio.h>

int main (void)

{
	float a, b;
	printf ("Dwse mia thermokrasia se Fahrenheit:");
	scanf ("%f", &a);
	b = (( a - 32 ) * 5 ) / 9;
	printf ("H thermokrasia se Celsius einai: %f", b);
	return 0;
}
