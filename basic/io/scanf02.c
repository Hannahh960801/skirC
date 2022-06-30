#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ret;
    printf("Please enter:\n");

    while(1)
    {
        ret = scanf("%d",&i);  // RETURN VALUE: the number of input items that successfuly matched and assigned. 
        printf("ret = %d\n",ret);
        if(ret != 1)     //如果把scanf放在循环里，则一定要加校验语句
        {
            printf("Enter error!\n"); //如果输入"a",不符合%d则报错
            break;
        } 
        
        printf("i= %d\n",i);
    }


    exit(0);
}