#include <stdio.h>
#define BPP 2       //һƷ�ѱ���
#define APB 8       //һ����˾��
#define DPA 2       //һ��˾��������
#define CPD 3       //һ�����ײ�����
int main(void)
{
    //����ֵ
    double B;
    double P,A,D,C;

    //��ȡֵ
    printf("�����뱭��:");
    scanf("%lf",&B);

    //����ֵ
    P = B / BPP;
    A = B * APB;
    D = A * DPA;
    C = D * CPD;

    //��ӡ
    printf("%g�� = %gƷ�� = %g��˾ = %g������ = %g����\n",B,P,A,D,C);


    //��������ֵ
    return 0;
}