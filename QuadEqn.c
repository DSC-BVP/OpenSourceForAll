#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
float a,b,c,r1,r2,d;
printf("Enter the value of a b and c: ");
scanf("%f %f %f",&a,&b,&c);
if(a==0)
{
printf("It is not a quadratic equation");
exit(0);
}

d=b*b-4*a*c;
if(d>0)
{
printf("Roots are Real and distinct \n");
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("r1 = %f r2 = %f",r1,r2);
}
else if(d==0)
{
printf("Roots are Real and equal \n");
r1=-b/(2*a);
r2=-b/(2*a);
printf("r1 = %f r2 = %f",r1,r2);
}
else
{
printf("Roots are complex and imaginary \n");
r1=-b/(2*a);
r2=sqrt(fabs(d))/(2*a);
printf("r1 = %f+i%f r2 = %f-i%f ",r1,r2,r1,r2);
}
}
