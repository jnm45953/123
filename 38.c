#include<stdio.h>
#include <math.h>


int main()
{
    //2編之和必定大於第3邊
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        int judge=1;
        if(a+b<=c)
            judge=0;
        if(a+c<=b)
            judge=0;
        if(b+c<=a)
            judge=0;
        if(judge==1)
            printf("fit\n");
        else
            printf("unfit\n");
    }

    return 0;
}
