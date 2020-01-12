#include<stdio.h>
#include <math.h>


int main()
{
    //判斷座標是否在園內
    int a,b,c=100*100;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int judge=1;

        if((a*a+b*b)<=10000)
            printf("inside\n");
        else
            printf("outside\n");
    }

    return 0;
}
