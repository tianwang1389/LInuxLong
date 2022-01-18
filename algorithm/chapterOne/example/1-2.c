#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);//120
    printf("%d%d%d\n",n%10,n/10%10,n/100);//021
    int m=n%10*100+n/10%10*10+n/100;
    printf("%03d\n",m);//021 输出最少3位数，不足高位补0
    printf("%d\n",m);//21
    return 0;
}