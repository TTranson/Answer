#include <stdio.h>
#define SPY 3.156e7     //һ�������
int main(void)
{
    //����ֵ
    int age;
    double seconds;

    //��ȡֵ
    printf("�������������:");
    scanf("%d",&age);

    //����ֵ
    seconds = age * SPY;

    //��ӡֵ
    printf("���������:%d\n",age);
    printf("��Ӧ��������:%le��\n",seconds);

    //��������ֵ
    return 0;
}