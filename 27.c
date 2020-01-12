#include<stdio.h>
#include <math.h>


int main()
{
    //2數中間的總和
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int i,small,big,num=0;
        if(a>=b)
        {
            big=a;
            small=b;
        }
        else
        {
            big=b;
            small=a;
        }
        for(i=small; i<=big; i++)
        {
            num=num+i;
        }
        printf("%d\n",num);
    }

    return 0;
}
