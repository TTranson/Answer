#include <stdio.h>
#define SMI "Smile!"
void sm(void);      //��ӡ"Smile!"
int main(void)
{
    //��ӡ
    sm();sm();sm();
    printf("\n");
    sm();sm();
    printf("\n");
    sm();
    printf("\n");

    //��������ֵ
    return 0;
}
void sm(void)
{
    printf("%s",SMI);
}