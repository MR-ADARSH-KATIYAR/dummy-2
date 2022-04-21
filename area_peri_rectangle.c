#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double ar,pr,b,h,s1,s2;
    printf("Enter the Base and Perimeter\n");
    scanf("%lf%lf",&b,&h);
    s1=b*b;
    s2=h*h;                                      
    double pe = sqrt(b * b + h * h);
    printf("Perimeter is : %lf",pe);
}