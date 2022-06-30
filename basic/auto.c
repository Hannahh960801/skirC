#include <stdio.h>
#include <stdlib.h>

void func(void)
{
    static int x; //int x = 0; 说明static变量一定一直只用同一块空间
    x++;
    printf("%p->%d\n",&x,x);
}

int main()
{

/*    auto int i;
    int j;
    static int k;
    printf("i=%d\n",i);
    printf("j=%d\n",j);
    printf("k=%d\n",k);
*/
    func();
    func();
    func();
    exit(0);
} 