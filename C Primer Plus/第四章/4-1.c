#include <stdio.h>
int main(void)
{
    //����ֵ
    char f_name[40],l_name[40];

    //��ȡֵ
    printf("�����������:");
    scanf("%s",f_name);
    printf("OK, �������������������:");
    scanf("%s",l_name);

    //��ӡֵ
    printf("OK,���������:%s%s\n",f_name,l_name);

    //��������ֵ
    return 0;
}