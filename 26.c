#include<stdio.h>
#include <math.h>


int main()
{
    //N*Nµ²ªG
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int i;
        for(i=1;i<=a;i++)
            printf("%d*%d=%d\n",i,i,i*i);
    }

    return 0;
}
