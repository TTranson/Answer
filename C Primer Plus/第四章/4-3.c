#include <stdio.h>
int main(void)
{
    //����ֵ
    double some;

    //��ȡֵ
    printf("������һ����:");
    scanf("%lf",&some);

    //��ӡֵ
    printf("a. The input is %.1lf or %.1le.\n",some,some);
    printf("b. The input is %+.3lf or %.3LE.\n",some,some);

    //��������ֵ
    return 0;
}