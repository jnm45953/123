#include<stdio.h>
#include <math.h>


int main()
{
    //�۹J�p��ɶ�
    float a,b;
    int d;
    while(scanf("%f",&a)!=EOF)
    {

        a=a*100;
        b=100-30*2.54;
        d=a/b+1;
        printf("%d\n",d);
    }

    return 0;
}
