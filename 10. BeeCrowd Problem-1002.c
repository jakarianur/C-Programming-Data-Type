/*
(https://www.beecrowd.com.br/judge/en/problems/view/1002)
*/
#include <stdio.h>
int main()
{
double pi = 3.14159;
double R, area;
scanf("%lf", &R);
area = pi * R * R;
printf("A=%.4lf\n", area);
return 0;
}
