#include <stdio.h>
int main()
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    //method1
    t=a;
    a=b;
    b=t;
    printf("%d %d\n",a,b);
    //method2
    a=a+b;
    b=a-b;
    a=a-b;
    return 0;
}