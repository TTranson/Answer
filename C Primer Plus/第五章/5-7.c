#include <stdio.h>
void lifh(double);
int main(void)
{
    //����ֵ
    double some;

    //��ȡֵ
    printf("����������Ҫ��������ֵ:");
    while(scanf("%lf",&some)==1){
        lifh(some);
        printf("��������һ����Ҫ��������ֵ:");
    }

    //��������ֵ
    return 0;
}
void lifh(double n)
{
    printf("%lf\n",n*n*n);
}