#include <stdio.h>
#define TEN 10
int main(void)
{
    //����ֵ
    int some;

    //��ȡֵ
    printf("������һ������:");
    scanf("%d",&some);

    //��ӡֵ
    for(int i=some;i<=some+10;i++){
        printf("%d\n",i);
    }

    //��������ֵ
    return 0;
}