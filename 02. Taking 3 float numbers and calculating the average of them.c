#include <stdio.h>
int main()
{
float a, b, c, avr;
printf("Enter Three number: ");
scanf("%f %f %f", &a, &b, &c);
avr=(a+b+c)/3;
printf("The Floating Average Number is: %.2f\n", avr);
return 0;
}
