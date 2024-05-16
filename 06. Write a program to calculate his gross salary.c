/* Niloys basic salary is input through the keyboard. His dearness allowance
is 40% of his basic salary and house rent is 20% of his basic salary.
Write a program to calculate his gross salary.
gross_salary=basic_salary+dearness_allowence+house_rent */

#include <stdio.h>
int main()
{
float salary, basic_salary, house_rant,total_sarary;
printf("Enter Your Salary: ");
scanf("%f", &salary);
basic_salary = salary*.2;
house_rant = salary*.4;
total_sarary = salary + basic_salary + house_rant;
printf("Total Salary = %.2f", total_sarary);
return 0;
}
