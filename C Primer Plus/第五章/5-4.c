#include <stdio.h>
#define C_F 30.48       //һӢ��30.48����
#define F_I 12          //һӢ��12Ӣ��
int main(void)
{
    //����ֵ
    double cm,in;
    int feet;

    //��ȡֵ
    printf("Enter a height in centimeters:");
    while(scanf("%lf",&cm)==1&&cm>0){
        in=cm/C_F*F_I;
        feet=in/F_I;
        in=in-feet*F_I;
        printf("%.1lf cm = %d feet, %.1lf inches\n",cm,feet,in);
        printf("Enter a height in centimeters (<=0 to quit):");
    }
    //ѭ������
    printf("bye\n");

    //��������ֵ
    return 0;
}