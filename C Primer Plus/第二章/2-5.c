#include <stdio.h>
#define B "Brazil"
#define R "Russia"
#define I "India"
#define C "China"
void br(void);      //��ӡ"Brazil, Russia"
void ic(void);      //��ӡ"India, China\n"
int main(void)
{
    br();
    printf(", ");
    ic();
    ic();
    br();
    printf("\n");

    //��������ֵ
    return 0;
}
void br(void)
{
    printf("%s, %s",B,R);
}
void ic(void)
{
    printf("%s, %s\n",I,C);
}