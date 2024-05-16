/* 
If the marks obtained by a student in five different subjects are input through the
keyboard, find out the aggregate marks and average marks obtained by the
student. Assume that the maximum marks that can be obtained by a student in
each subject is 100.
  */
#include <stdio.h>
int main() {
float sub1, sub2, sub3, sub4, sub5;
printf("Enter marks for Subject 1: ");
scanf("%f", &sub1);
printf("Enter marks for Subject 2: ");
scanf("%f", &sub2);
printf("Enter marks for Subject 3: ");
scanf("%f", &sub3);
printf("Enter marks for Subject 4: ");
scanf("%f", &sub4);
printf("Enter marks for Subject 5: ");
scanf("%f", &sub5);
float aggregateMarks = sub1 + sub2 + sub3 + sub4 + sub5;
float averageMarks = (float)aggregateMarks / 5;
printf("Aggregate Marks: %.2f\n", aggregateMarks);
printf("Average Marks: %.2f\n", averageMarks);
return 0; 
}
