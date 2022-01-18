#include <stdio.h>
int main()
{
    //鸡兔牢笼
    //总数n=鸡+兔
    //总腿数m=鸡*2+兔*4
    //鸡=n-兔；兔=（m-2n）/2
    int n,m;
    scanf("%d%d",&n,&m);
    int a,b;
    b=(m-2*n)/2;
    a=n-b;
    if(m%2==1||a<0||b<0)
        printf("No answer\n");
    else
        printf("%d %d\n",a,b);
    return 0;
}