#include <stdio.h>
int main(void)
{
    //����ֵ
    int one,two,res;

    //��ȡֵ
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&one);
    printf("Now enter the first operand:");
    while(scanf("%d",&two)==1&&two>0){
        res = two % one;
        printf("%d %% %d is %d\n",two,one,res);
        printf("Enter next number for first operand (<=0 to quit):");
    }

    //ѭ������
    printf("Done\n");

    //��������ֵ
    return 0;
}