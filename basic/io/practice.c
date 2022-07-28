#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define WEIGHT 3.0e-23
#define KQ 950

static void water(void)
{

    float num;
    float sum;

    printf("Please input num of water:\n");
    scanf("%f", &num);
    if(num <= 0)
    {
        fprintf(stderr,"Input Error!\n");
        exit(1);
    }
    sum = num * KQ / WEIGHT;
    printf("Sum is: %e\n", sum);
    
    return;
}

static void area(void)
{
    float a,b,c;
    float s,area;

    printf("Please enter:\n");
    scanf("%f%f%f",&a, &b, &c);

    if(a+b <=c || b+c <= a || a+c <= b)
    {
        fprintf(stderr,"Enter Invalid Value!\n");
        exit(1);
    }

    //s = 1/2*(a+b+c);  //int与float做运算是转向double
    s = 1.0/2.0*(a+b+c);  
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("area is:%f\n",area);

    return;
}

static void root(void)
{
    float a,b,c;
    float disc,p,q,x1,x2;

    printf("Please enter 3 num:\n");
    scanf("%f%f%f", &a, &b, &c);
    if((b*b - 4*a*c) < 0)
    {
        fprintf(stderr, "EINVAL.\n");
        exit(1);
    }
    disc = b*b - 4*a*c;
    p = -b/2*a;
    q = sqrt(disc)/2*a;
    x1 = p + q;
    x2 = p - q;

    printf("x1 = %f\nx2 = %f\n", x1, x2);

    return;
}

int main()
{
    //water();
    //area();
    root();
    exit(0);
}