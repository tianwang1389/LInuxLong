#include <stdio.h>
int main()
{
    //从小到大排序
    //method1 先排序
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    //method1 先排序
    if(a>b)
        {t=a;a=b;b=t;}
    if (a>c)
        {t=a;a=c;c=t;}
    if (b>c)
        {t=b;b=c;c=t;}
    printf("%d %d %d\n",a,b,c);
    //method2 列举所有可能性,且要确保输出符合题意，保证所有情况
    if(a<=b&&b<=c)
        printf("%d %d %d\n",a,b,c);
    else if(a<=b&&c<=b)
        printf("%d %d %d\n",a,c,b);
    else if(b<=a&&a<=c)
        printf("%d %d %d\n",b,a,c);
    else if(b<=c&&c<=a)
        printf("%d %d %d\n",b,c,a);
    else if(c<=a&&a<=b)
        printf("%d %d %d\n",c,a,b);
    else if(c<=b&&b<=a)
        printf("%d %d %d\n",c,b,a);
    
    return 0;
}