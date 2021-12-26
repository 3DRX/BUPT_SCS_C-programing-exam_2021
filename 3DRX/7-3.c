#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int ipt[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",ipt+i);
        ipt[i]-=4;
    }
    for (int i = 0; i < n; i++)
    {
        int gan;
        gan=ipt[i]%10;
        int zhi=ipt[i]%12;
        printf("%c%c\n",'0'+gan,'A'+zhi);
    }
    return 0;
}