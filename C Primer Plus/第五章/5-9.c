#include <stdio.h>
void Temperatures(double);
int main(void)
{
    //����ֵ
    double tem;

    //��ȡֵ
    printf("������һ�������¶�:");
    while(scanf("%lf",&tem)==1){
        Temperatures(tem);
        printf("��������һ�������¶�:");
    }

    //��������ֵ
    return 0;
}
void Temperatures(double n)
{
    const double FIVE = 5.0;
    const double NINE = 9.0;
    const double THTW = 32.0;
    const double KK = 273.16;
    double C,K;
    C = FIVE/NINE*(n-THTW);
    K = C + KK;
    printf("%g ���϶� = %g ���϶� = %g ���϶�\n",n,C,K);
}