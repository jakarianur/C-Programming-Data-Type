#include <stdio.h>
int main()
{
float lenth, breadth, area;
printf("Enter First number: ");
scanf("%f", &lenth);
printf("Enter Second number: ");
scanf("%f", &breadth);
area = lenth*breadth;
printf("The Rectangular Area is: %.2f\n", area);
return 0;
}
