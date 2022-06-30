#include <stdio.h>
#include <stdlib.h>
#define STRSIZE 32

int main()
{
    char ch = 65;
    int i = 123;
    float f = 123.456;
    char str[STRSIZE] = "helloworld";
    
    int j = 255;

    double dou = 123.456;
    long long l = 123456;

    printf("%c\n", ch);
    printf("%d\n", ch);

    printf("i = %6d\n",i); //修饰符m: 输出数据域宽。若数据长度<m，左补空格； 数据长度>m，按原数输出。
    
    printf("f = %f\n",f); //浮点数自动保留6位小数
    printf("f = %4f\n",f);
    printf("f = %20f\n",f);
    printf("f = %8.1f\n",f); //修饰符.n: 对实数，指定保留几位小数

    printf("str = %.5s\n",str);//修饰符.n: 对字符串，指定实际输出位数
    printf("str = %-10.5s[over]\n",str);// -: 输出数据在域内左对齐
    printf("j = %#x\n",j); //x:输出为16进制 //#：在8进制,16进制前显示前导0，0x
    printf("j = %#o\n",j); //o:输出为8进制

    printf("dou = %lf\n",dou); //l: 在e,f,g前，指定输出精度为double类型
    printf("l = %lld\n",l);     //   在d,o,x,u前，指定输出精度为long型

    printf("%d %e\n",i,f);

    5LL*1024LL*1024LL*1024LL   //5G 整数溢出

    //一年有多少秒
    #define SEC_YEAR (60LL*60LL*24LL*365LL)

    exit(0);
}