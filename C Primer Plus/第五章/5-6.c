#include <stdio.h>
int main(void)
{
    //����ֵ
    int day,count;
    int sum;

    //��ȡֵ
    printf("������׬������(<=0 to quit):");
    while(scanf("%d",&day)==1&&day>0){
        for(count=0,sum=0;count<=day;count++){
            sum+=count*count;
        }
        printf("һ����:%dԪ\n",sum);
        printf("��������һ��׬Ǯ����(<=0 to quit):");
    }

    //��������ֵ
    return 0;
}