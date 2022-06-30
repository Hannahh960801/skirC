#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

extern int i; //此处的变量i使用了其他.c文件中的i

void func(void)
{
    printf("[%s]:i = %d\n",__FUNCTION__,i);

    exit(0);
} 