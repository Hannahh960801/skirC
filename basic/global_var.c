#include <stdio.h>
#include <stdlib.h>

int i = 100;

/*int main()
{
    int i = 3;
    {
        int i = 5; //变量作用范围：内部的屏蔽外部的
        printf("i = %d\n", i);
    }
    exit(0);
}
*/

void func(int i)
{
    printf("i = %d\n",i);
}

int main()
{
    int i = 3;
    func(i);
    {
        int i = 5;
        printf("i = %d\n", i);
    }
    exit(0);
}