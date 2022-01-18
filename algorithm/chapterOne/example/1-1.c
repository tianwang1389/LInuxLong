#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    //圆柱体面积
    const double pi=acos(-1.0);
    double r,h,s1,s2;
    scanf("%lf%lf",&r,&h);//
    s1=2*pi*r*r;//上下底面积
    s2=2*pi*r*h;//侧面积
    printf("%.3f\n",s1+s2);
    return 0;
}