#include <stdio.h>
int main(void)
{
    //����ֵ
    double some;

    //��ȡֵ
    printf("Enter a floating-point value: ");
    scanf("%lf",&some);

    //��һ�������ʽ
    printf("fixed-point notation: %lf\n",some);
    //�ڶ��������ʽ
    printf("exponential notation: %le\n",some);
    //�����������ʽ
    printf("p notation: %.2la\n",some);

    //��������ֵ
    return 0;
}