#include <stdio.h>
#define CPF 2.54        //һӢ��������
int main(void)
{
    //����ֵ
    double height;
    double c_height;

    //��ȡֵ
    printf("�������������(Ӣ��):");
    scanf("%lf",&height);

    //����
    c_height = height * CPF;

    //��ӡ
    printf("������� = %g����\n",c_height);

    //��������ֵ
    return 0;
}