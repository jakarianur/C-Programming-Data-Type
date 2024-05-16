/* Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees.
fahrenheit=(celcius*9/5)+32 */

#include<stdio.h>
int main()
{
float C, F;
printf("Enter Fahrenheit Value: ");
scanf("%f", &F);
C = (F-32)/1.8;
printf("The Centigrade Value : %.2f \n", C);
return 0;
}
