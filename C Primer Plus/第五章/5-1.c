#include <stdio.h>
#define SMH 60
int main(void)
{
    //����ֵ
    int min_tot;
    int min,hour;

    //��ȡֵ
    printf("�������ܵķ�����(<=0 to quit):");
    while(scanf("%d",&min_tot)==1&&min_tot>0){
        min=min_tot%SMH;
        hour=min_tot/SMH;
        printf("%d���� = %dСʱ%d����\n",min_tot,hour,min);
        printf("��������һ���ܷ�����(<=0 to quit):");
    }

    //��������ֵ
    return 0;
}