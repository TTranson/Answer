#include <stdio.h>
#define BPB 8           //һ�ֽ�8λ
int main(void)
{
    //����ֵ
    float mbps,mb,time;

    //��ȡֵ
    printf("�������ļ���С(MB):");
    scanf("%f",&mb);
    printf("�������������ļ������ٶ�(Mb/s):");
    scanf("%f",&mbps);

    //����ֵ
    time = mb * BPB / mbps;

    //��ӡֵ
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n",mbps,mb,time);

    //��������ֵ
    return 0;
}