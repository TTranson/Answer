#include <stdio.h>
#include <string.h>
int main(void)
{
    //����ֵ
    char name[40];

    //��ȡֵ
    printf("�������������:");
    scanf("%s",name);

    //��ӡֵ
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"%*s\"\n",strlen(name)+3,name);

    //��������ֵ
    return 0;
}