/* The distance between Mirpur and Ashulia is input through the keyboard in
meters. Write a program to convert and print this distance in feet, inches
and centimeters. 
1 meter=100 cm
1 meter=39.37 inch
1 meter=3.21 feet
*/
#include<stdio.h>
int main() {
float distance, vulue_cm, vulue_inch, vulue_feet;
printf("Enter The Distanc Mirpur and Ashulia at Meter: ");
scanf("%f", &distance);
vulue_cm = distance*100;
vulue_inch = distance*39.37;
vulue_feet = distance*3.21;
printf("The Value at cm is: %.2f cm\n",vulue_cm );
printf("The Value at inch is: %.2f inch\n",vulue_inch );
printf("The Value at feet is: %.2f feet\n",vulue_feet );
return 0; }
