//��ĿҪ��:��Ҫһ����Ӣ�絥λת��Ϊ���׵�λ�ĳ���.
//Ҫ��1:��ʾ�û�����Ӣ��ֵ
#include <stdio.h>
#define SWAP 2.54       //һӢ�� = 2.54����
int main(void)
{
    //����ֵ
    double length,c_length;

    //��ȡֵ
    printf("������һ������(Ӣ��):( <= 0 to quit )");
    while(scanf("%lf",&length)==1&&length>0){
        c_length=length*SWAP;
        printf("%gӢ�� = %g����\n",length,c_length);
        printf("������һ������(Ӣ��):( <= 0 to quit )");
    }
    /*������С�����ֵʱӦ��������û���������Ļ�,�����»�ȡ����*/
    /*�����������ʱӦ���û���������,�����»�ȡ����*/
    /*���ҽ����û�����qʱ,�������*/

    //��������ֵ
    return 0;
}