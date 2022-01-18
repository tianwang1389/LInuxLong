#include <stdio.h>
#include <math.h>
int main()
{
    //1-1
    printf("%d\n",1+2);
    printf("%d\n",3-4);
    printf("%d\n",5*6);
    printf("%d\n",8/4);
    printf("%d\n",8/5);//生成结果为1引入浮点数
    //1-2
    printf("%f\n",8.0/5.0);//1.600000
    printf("%.1f\n",8.0/5.0);//1.6
    printf("%.2f\n",8.0/5.0);//1.60
    printf("%.1f\n",8/5);//1.6?? 单独输出为0.0
    printf("%d\n",8.0/5.0);//1丢失精度
    //1-3
    printf("%.8f\n",1+2*sqrt(3)/5-0.1);
    printf("%.1f\n",sqrt(9.0));//平方根
    return 0;
}