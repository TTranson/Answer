#include <stdio.h>
#define DPW 7
int main(void)
{
    //����ֵ
    int days;
    int week,day;

    //��ȡֵ
    printf("������һ������(<=0 to quit):");
    while(scanf("%d",&days)==1&&days>0){
        week = days / DPW;
        day = days % DPW;
        printf("%d days are %d weeks, %d days.\n",days,week,day);
        printf("��������һ������(<=0 to quit):");
    }

    //��������ֵ
    return 0;
}