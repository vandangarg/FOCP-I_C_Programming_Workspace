#include <stdio.h>
int main(void)
{

    double marks;
    double attendance;

    printf("Marks: ");
    scanf("%lf", &marks);
    printf("Attendance: ");
    scanf("%lf", &attendance);

    if(marks>=90 && attendance>=70)
    printf("Special Scholarship");

    else if(marks>=75 && attendance >=75)
    printf("Eligible");

    else
    printf("Not Eligible");

    return 0;


}