#include<stdio.h>
#include<math.h>
int main()
{
    float j1,j2,sqD,D,a,b,c; //sqD is  floating value of square root of D//
    printf("enter the values of a b and c of a quardratic eqn.\n");
    scanf("%f %f %f", &a,&b,&c);
    printf("your eqn is : \n%0.1fx^2+%0.1fx+%0.1f\n", a,b,c);
    D=b*b-4*a*c;
    sqD=sqrt(D);
    if (D<0)
    {
       printf("roots are imaginary");

    }
    else
    {
       j1=(-b+sqD)/2*a;
       j2=(-b-sqD)/2*a;
 
       printf("roots of the given eqn. are %f,%f", j1,j2);
    }
    
return 0;
    
}
