#include<stdio.h>
#include <math.h>


int main()
{
    //1-N����5 7 ������
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i=0,num=0;
        for(i=1;i<=n;i++)
            if(i%5 == 0 && i%7 == 0)
                printf("%d ",i);
        printf("\n");
    }

    return 0;
}
