#include <stdio.h>

int main(void)
{
    int row,col,lit;
    scanf("%d%d%d",&row,&col,&lit);
    int screen[row+2][col+2];
    for (int i = 0; i < row+2; i++)
    {
        for (int k = 0; k < col+2; k++)
        {
            screen[i][k]=0;
        }
    }
    
    for (int i = 0; i < lit; i++)
    {
        int spotRow,spotCol;
        int temp=0;
        scanf("%d%d",&spotRow,&spotCol);
        // spotRow-=1;
        // spotCol-=1;
        for (int x = spotCol-1; x <= spotCol+1; x++)
        {
            for (int y = spotRow-1; y <= spotRow+1; y++)
            {
                screen[y][x]=1;
            }
        }
    }
    int count=0;
    for (int i = 1; i < row+1; i++)
    {
        for (int k = 1; k < col+1; k++)
        {
            if (screen[i][k]==1)
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}