#include <stdio.h>
#define O "one"
#define T "two"
#define TH "three"
void one_three(void);       //��ӡһ����,������һ��������ӡ
void two(void);             //��ӡ��
int main(void)
{
    //��ӡ
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    //��������ֵ
    return 0;
}
void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}
void two(void)
{
    printf("two\n");
}