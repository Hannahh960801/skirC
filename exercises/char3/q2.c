/**
 * @file q2.c
 * @author
 * @brief 编写一个程序，要求提示输入一个ASCII码值(如，66)，然后打印 输入的字符。
 * @version 0.1
 * @date 2022-06-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int ret;

    printf("Please enter an ASCII:\n");
    ret = scanf("%d", &a);
    
    if (ret == 1)
    {
        printf("%c\n", a);
    }
    else
    {
        fprintf(stderr, "ERROR No Int");
    }

    return 0;
}
