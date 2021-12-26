#include <stdio.h>

int ifContain(long long n)
{
    int res=0;
    while (n)
    {
        long long temp=n%10;
        if (temp==7)
        {
            res=1;
        }
        n/=10;
    }
    return res;
}

int main(void)
{
    long long first,last;
    int count=0;
    scanf("%ld%ld",&first,&last);
    for (long long i = first; i <= last; i++)
    {
        if (ifContain(i)==1 || i%7==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}