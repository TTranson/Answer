#include <stdio.h>
#include <string.h>
int main(void)
{
    //����ֵ
    char f_name[40],l_name[40];
    
    //��ȡֵ
    printf("�����������:");
    scanf("%s",f_name);
    printf("�������������:");
    scanf("%s",l_name);

    //��ӡֵ
    printf("%s %s\n",f_name,l_name);
    printf("%*d %*d\n",strlen(f_name),strlen(f_name),strlen(l_name),strlen(l_name));
    printf("%s %s\n",f_name,l_name);
    printf("%-*d %-*d\n",strlen(f_name),strlen(f_name),strlen(l_name),strlen(l_name));

    //��������ֵ
    return 0;
}