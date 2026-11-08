#include <stdio.h>
int main(void)
{

int age = 17;
char name[]= "John Doe";
float percentage= 88.8;
char grade='B';

printf("----------------------\n");
printf("Student ID Card\n");
printf("----------------------\n");
printf("Name       : %s\n", name);
printf("Age        : %d\n", age);
printf("Percentage : %.2f\n", percentage);
printf("Grade      : %c\n", grade);
printf("----------------------\n");

return 0;


}