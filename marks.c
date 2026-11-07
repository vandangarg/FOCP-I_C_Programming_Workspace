#include <stdio.h>
int main(void)
{ 
    float a, b, c, d, e;

    printf("Enter English Marks: \n");
    scanf("%f", &a);

    
    printf("Enter Mathematics Marks: \n");
    scanf("%f", &b);

    
    printf("Enter Physics Marks: \n");
    scanf("%f", &c);

    
    printf("Enter Chemistry Marks: \n");
    scanf("%f", &d);

    
    printf("Enter Economics Marks: \n");
    scanf("%f", &e);

    printf("Total Marks: %.2f\n", a+b+c+d+e);
    printf("Percentage: %.2f", (a+b+c+d+e)/5);
    
    return 0;
    
}

