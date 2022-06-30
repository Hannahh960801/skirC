#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

static int i = 10; //static修饰变量：为了使在两个.c文件里重名的变量i不冲突，
                   //             当前变量只能在当前文件范围内使用

int main()
{
    printf("[%s]:i = %d\n", __FUNCTION__,i);
    func();
    exit(0);
}