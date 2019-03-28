#include <stdio.h>
#include <stdlib.h>
int increment(int i)
{
    static int count=0;
    count=count+i;
    return count;
}
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
        j=increment(i);
    printf("%d",j);
    return 0;
}
