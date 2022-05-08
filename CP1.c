#include<stdio.h>

int main()
{
    char str[]="A string.";
    char *pos=str;
    printf("%c %p %c\n",str[0],*pos,pos[3]);
    pos=pos+2;
    printf("%c %c %c",*pos,pos[2],pos[5]);
    return 0;
}