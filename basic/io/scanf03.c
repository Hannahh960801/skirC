#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char ch;

    printf("Please enter:\n");

    scanf("%d",&i);
    //scanf("%c",&ch);
    //scanf("%*c%c",&ch);   //format: *抑制符的使用， 阻止&ch接收空格或tab
//或
    getchar();  //把空格或tab吃掉
    scanf("%c",&ch);
    printf("i = %d,ch = %c\n",i,ch);

    exit(0);
}