#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593
#define ADD 2+3                // #define ADD (2+3)
#define MAX(a,b)  ({typeof(a) A=a,B=b; ((A) > (B) ? (A) : (B));})//((a) > (b) ? (a) : (b))//带参的宏的使用
#if 0
int max(int a,int b)           //函数比宏更稳定，适用应用层；宏更节省运行时间
{                               // #部分在预处理阶段占用编译时间；函数占用运行时间
    return a > b ? a : b;
}
#endif
int main()
{
    int i = 5, j = 3;
    //printf("%d\n", MAX(i,j*2));
    printf("i = %d\tj = %d\n", i,j);
    printf("%d\n", MAX(i++,j++));
    printf("i = %d\tj = %d\n", i,j);

   //printf("%d\n",ADD * ADD);
    exit(0);
}

