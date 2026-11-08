#include <stdio.h>
int main(void)
{ 

    int age;
    float height;
    char grade;

    printf("Enter your age: ");

    if(scanf("%d",&age)!=1){
        printf("Please enter age only\n");
    return 1; } 
    

    printf("Enter your height (in meters): ");
    
    if(scanf("%f", &height)!=1){
        printf("Please enter height only\n");
    return 1; } 

    printf("Enter your grade: ");
    
    if(scanf(" %c", &grade)!=1){
        printf("Please enter grade only\n");
    return 1; } 

   
   printf("-------------------\n");
   printf("Student ID Card\n");
printf("-------------------\n");
   
    if(age!=0)
{printf("Age    : %d\n",age);
}
else
{
    printf("Age cannot be Zero");
}

if(height!=0)
{printf("Height : %.2fm\n",height);
}
else
{
    printf("Height cannot be Zero");
}

printf("Grade  : %c\n",grade);
printf("-------------------\n");
return 0;

}