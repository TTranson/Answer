#include <stdio.h>
#define SPG 3.785       //һ��������
#define KPY 1.609       //һӢ��ǧ����
int main(void)
{
    //����ֵ
    double yl,gl,sh,km;
    double ypg,spbk;

    //��ȡֵ
    printf("���������е������(Ӣ��):");
    scanf("%lf",&yl);
    printf("�������������ĵ�������(����):");
    scanf("%lf",&gl);

    //���㲢��ӡ
    //1.���㲢��ʾ����ÿ����������ʻ��Ӣ����
    ypg = yl / gl;
    printf("�������ÿ����һ������������ʻ%gӢ��\n",ypg);
    //2.��Ӣ��/����ת������/100����,��ʾС�����1λ����
    spbk = (gl*SPG)/(yl*KPY/100);
    printf("%.1lfӢ��/���� = %.1lf��/100����\n",ypg,spbk);

    //��������ֵ
    return 0;
}