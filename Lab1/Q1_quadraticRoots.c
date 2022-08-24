#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c=0.0;
    printf("Enter the coefficients of x^2,x,constant");
    scanf("%lf %lf %lf",&a,&b,&c);
    double d=(b*b)-(4*a*c);
    double r1,r2;
    if(d>0)
    {
        r1=((-b)+sqrt(d))/(2*a);
        r2=((-b)-sqrt(d))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
    }
    else if(d==0)
    {
        r1=r2=(-b)/(2*a);
        printf("root1 = root2 = %.2lf;", r1);
    }
    else
    {
         float realPart = -b / (2 * a);
        float imagPart = sqrt(-d) /(2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
