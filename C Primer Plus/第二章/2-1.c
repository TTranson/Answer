#include <stdio.h>
#define F_N "��"
#define L_N "��˳"
int main(void)
{
    //һ��printf()��ӡһ��
    printf("%s%s\n",F_N,L_N);

    //һ��printf()��ӡ����
    printf("%s\n%s\n",F_N,L_N);

    //����printf()��ӡһ��
    printf("%s",F_N);
    printf("%s\n",L_N);

    //��������ֵ
    return 0;
}