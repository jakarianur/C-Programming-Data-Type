#include <stdio.h>
int main()
{
float a,b, sum, sub, mul, dev;
printf("Enter First number: ");
scanf("%f", &a);
printf("Enter Second number: ");
scanf("%f", &b);
sum=a+b;
sub=a-b;
mul=a*b;
dev=a/b;
printf("The Two Number Addition is: %.2f\n", sum);
printf("The Two Number Substrction is: %.2f\n", sub);
printf("The Two Number Multification is: %.2f\n", mul);
printf("The Two Number Divided is: %.2f\n", dev);
 return 0;
}
