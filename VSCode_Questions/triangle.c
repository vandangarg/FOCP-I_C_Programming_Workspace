#include <stdio.h>
int main(void)
{

    int a, b, c;

    printf("Enter First Angle: ");
    scanf("%d", &a);

    printf("Enter Second Angle: ");
    scanf("%d", &b);

    printf("Enter Third Angle: ");
    scanf("%d", &c);

    if(a+b+c!=180 || a<=0 || b<=0 ||c<=0)
    printf("Invalid"); 

    else{ if(a<90 && b<90 && c<90)
    printf("Acute");
    
    else if(a==90 || b==90 || c==90)
    printf("Right");

    else 
    printf("Obtuse");
    }
    

    return 0;

}