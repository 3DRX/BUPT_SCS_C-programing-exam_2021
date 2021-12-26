#include <stdio.h>

int main(void)
{
    double father,mother;
    scanf("%lf%lf",&father,&mother);
    int gender;
    scanf("%d",&gender);
    if (gender==1)
    {
        printf("%.2lf",(father+mother)*1.08/2);
    }
    else
    {
        printf("%.2lf",(father*0.923+mother)/2);
    }
    return 0;
}