#include <stdio.h>
#define KPF 3.0e-23     //һ����ˮ������(��)
#define KPK 950         //һ����ˮ������(��)
int main(void)
{
    //����ֵ
    double kwto;        //ˮ�Ŀ�����
    double uvffzi;      //ˮ��������

    //��ȡֵ
    printf("������ˮ�Ŀ�����:");
    scanf("%lf",&kwto);

    //����
    uvffzi = kwto * KPK / KPF;

    //��ӡ
    printf("%g����ˮ��Լ��%g��ˮ����\n",kwto,uvffzi);

    //��������ֵ
    return 0;
}