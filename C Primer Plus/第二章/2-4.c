#include <stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
    //��ӡǰ������Ϣ
    jolly();
    jolly();
    jolly();

    //��ӡ��һ����Ϣ
    deny();

    //��������ֵ
    return 0;
}
void jolly(void)        //��ӡǰ������Ϣ
{
    printf("For he's a jolly good fellow!\n");
}
void deny(void)         //��ӡ��һ����Ϣ
{
    printf("Which nobody can deny!\n");
}