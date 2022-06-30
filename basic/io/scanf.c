#include <stdio.h>
#include <stdlib.h>

/*
 *int scanf(const char *format, 地址表);
 *
 */
#define STRSIZE 32
 int main()
 {
     int i;
     float f;
     char str[STRSIZE];

    printf("Please enter:\n");  

    scanf("%s",str);    //%作为输入项时，其中不能添加分隔符，如，空格回车换行。。
    printf("%s\n",str);

/*
    scanf("%d%f",&i,&f);     // 注意： \n仅针对printf使用，scanf("%d\n",&i);错误
                              //终端里的\n不是此处的\n
    printf("i = %d\n",i);
    printf("f = %f\n",f);
*/
    exit(0);
 }
 