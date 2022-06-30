#include <stdio.h>
#include <stdlib.h>
/*
 *\n对缓冲区的影响
 *
*/
int main()
{
    //printf("[%s:%d]before while().",__FUNCTION__,__LINE__);
    printf("[%s:%d]before while().\n",__FUNCTION__,__LINE__);

    while(1);

    //printf("[%s:%d]after while().",__FUNCTION__,__LINE__);
    printf("[%s:%d]after while().\n",__FUNCTION__,__LINE__);

    exit(0);
}