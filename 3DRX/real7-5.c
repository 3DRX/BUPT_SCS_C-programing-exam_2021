#include <stdio.h>
#include <stdlib.h>

void sort(int *ipt, int start, int end)
{
    for (int i = start; i < end-1; i++)
    {
        for (int k = start; k < end-1; k++)
        {
            if (ipt[k]>ipt[k+1])
            {
                int temp=ipt[k];
                ipt[k]=ipt[k+1];
                ipt[k+1]=temp;
            }
        }
    }
}

int * createBed(int num)
{
    int *res;
    res=(int *)malloc(sizeof(int)*num);
    for (int i = 0; i < num; i++)
    {
        res[i]=0;
    }
    return res;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int cows[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",cows+i);
    }
    sort(cows,0,n-1);
    // int bedNumber=cows[n-1]*cows[n-1];
    int bedNumber=1;
    while (1)
    {
        int ifbreak=0;
        int *bed=createBed(bedNumber);
        for (int i = 0; i < n; i++)
        {
            if (cows[i]%bedNumber>=bedNumber)
            {
                ifbreak=1;
                break;
            }
            else if (bed[cows[i]%bedNumber]==0)
            {
                bed[cows[i]%bedNumber]=1;
            }
            else
            {
                ifbreak=1;
                break;
            }
        }
        if (ifbreak==1)
        {
            bedNumber++;
            continue;
        }
        else
        {
            printf("%d\n",bedNumber);
            free(bed);
            break;
        }
    }
    return 0;
}