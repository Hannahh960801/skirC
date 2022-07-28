/**
 * @file q5.c
 * @author your name (you@domain.com)
 * @brief 一年大约有3.156×107秒。编写一个程序，提示用户输入年龄，然后显 示该年龄对应的秒数。
 * @version 0.1
 * @date 2022-07-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define SEC_YEAR 3.156e-7

int main()
{
    int a;
    double s;
    printf("Input an age:\n");
    scanf("%d", &a);
    s = SEC_YEAR * a;
    printf("%e\n",s);

    exit(0);
}
