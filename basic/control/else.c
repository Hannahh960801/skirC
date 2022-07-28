#include <stdio.h>
#include <stdlib.h>
/**
 * @brief 注意：else只与离他最近的if相匹配！！！
 * 
 */

int main()
{
    int a = 1, b = 1, c = 2;

    if(a == b)
        if(b == c)
            printf("a == b == c\n");
    else
        printf("a != b\n");

    exit(0);
}

/*
int main()
{
    int a = 1, b = 1, c = 2;

    if(a == b)
    {
        if(b == c)
            printf("a == b == c\n");
    }      
    else
        printf("a != b\n");

    exit(0);
}
*/