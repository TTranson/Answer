#include <stdio.h>
int main(void)
{
    //����ֵ
    char name[40];
    double height;

    //��ȡֵ
    printf("�������������:");
    scanf("%s",name);
    printf("%s,����������������(Ӣ��):",name);
    scanf("%lf",&height);

    //��ӡֵ
    printf("%s, you are %g feet tall\n",name,height);

    //��������ֵ
    return 0;
}