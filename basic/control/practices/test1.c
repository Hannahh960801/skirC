/** 
1. 投资问题：A以10%的单利投资了100美元，B以每年5%的复合利息投资了100美元。
   计算需要多少年b的投资总额才会超过的，
   并且显示出到那个时候两个人各自的资产总额。
2. 从终端读入数据，直到输入0值为之，计算出其中偶数的个数及平均值和奇数的个数及平均值。
3. 从终端上输入若干字符，对其中的元音字母进行统计

4. 写出fibonacci数列的前40项
   1，1，2，3，5，8，13，21，，，，

5. 输出99乘法表

6. 百钱买百鸡：鸡翁一，值钱5；鸡母一，值钱三；三鸡雏，值钱一，问鸡翁，鸡母，鸡雏各几何？

7. 求出1000以内的水仙花数：153  1+125+27 = 153

8. 求出1000以内的所有质数：2，3，5，7，11，13，17，19，，，，

9. 在终端上实现如下输出：
   ABCDEF
   BCDEF
   CDEF
   DEF
   EF 
   F 

10. 输出钻石型
         *
        * *
       * * *
        * *
         * 
11. 从终端输入N个数（以字母Q/q作为终止），求和

12. 从半径为1开始，输出圆的面积，直到面积大于100为止
*/
#include <stdio.h>
#include <stdlib.h>

#define INIT    100
#define SIMP    0.10
#define MULT    0.05
#define CUBE(x) (x * x * x)
#define PI 3.14

static void test1(void)
{
    int year = 0;
    double suma = INIT, sumb = INIT;

    while(sumb <= suma)
    {
        suma += INIT * SIMP;
        sumb += MULT * sumb;
        year ++;
    }
    printf("year = %d\n", year);
    printf("suma = %f\tsumb = %f\n",suma,sumb);
}

static void test2(void)
{
    int n;
    int ct_odd = 0, ct_even = 0;
    double sum_odd = 0, sum_even = 0;

    while(scanf("%d",&n) == 1 && n != 0)
    {
        if(n % 2 == 1)
        {
            ct_odd ++;
            sum_odd += n;
        }
        else
        {
            ct_even ++;
            sum_even += n;
        }
    }
    printf("ct_even = %d\n", ct_even);
    printf("avg_even = %f\n", (sum_even/ct_even));
}

static void test5(void)
{
    int i,j;
    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf((j == i) ? "%4d\n" : "%4d", i*j);
        }
    }
}

static void test6(void)
{
    int x,y,z;

    for(x = 0; x <= 20; x++)
    {
        for(y = 0; y <= 100/3; y++)
        {
            z = (100 - x - y);
            if((5 * x + 3*y + z/3) == 100 && z % 3 == 0)
            {
                printf("x = %d, y = %d, z = %d\n", x,y,z);

            }
        }
    }
    
}

static void test7()
{
    int x,y,z;
    for(x = 1; x <= 9; x++)
    {
        for ( y = 0; y < 10; y++)
        {
            for ( z = 0; z < 10; z++)
            {
                if ((x * 100 + y * 10 + z ) == CUBE(x) + CUBE(y) + CUBE(z)) 
                {
                    printf("%d\n", (x * 100 + y * 10 + z));
                }
                
            }
            
        }
        
    }

}

static void test0(void)
{
    int i;
    int a,b,c;

    for(i = 100; i < 1000; i++)
    {
        a = i/100;
        b = i%100/10;
        c = i%10;
        if(i == a*a*a + b*b*b + c*c*c)
            printf("%d\n",i);
    }
}

static void test8()
{
    int i,j;
    int flag;
    for(i = 2; i < 1000; i++)
    {
        flag = 1;
        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d is a prime.\n", i);
        }
        
    }
}

static void test9()
{
    int i, line = 6, chars = 6;
    char ch;

    for(i = 0; i < line; i++)
    {
        for(ch = 'A'+i; ch < 'A'+chars; ch ++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}

static void test10(void)
{
    int i,j,k;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3-i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 5-2*i; k++)
        {
            printf("*");
        }
        printf("\n"); 
    }
}

static void test11()
{
    int i, sum = 0;
    printf("please enter a number (enter q to quit): ");
    while(scanf("%d",&i) == 1)
    {
        sum += i;
        printf("please enter another number (enter q to quit): ");
    }
    printf("sum = %d\n", sum);
}

static void test12()
{
    int r;

    for(r = 1; ; r++)
    {
        float a = 3.14 * r * r;
        if(a > 100)
        {
            break;
        }
        printf("area = %f\n", a);
    }
}

int main(void) 
{
    // test1();
    // test2();
    // test5();
    // test6();
    // test7();
    // test8();
    // test9();
    // test10();
    // test11();
    test12();
    exit(0);
}