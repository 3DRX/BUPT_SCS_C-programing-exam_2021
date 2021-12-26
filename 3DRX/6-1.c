#include <stdio.h>
#include <math.h>

double fun( int n , double x );

int main()
{
    int        n;
    double    x;

    scanf( "%d%lf" , &n , &x );
    printf( "%.3f\n" , fun( n , x ) );

    return 0;
}

double fun( int n , double x )
{
    if (n==1)
    {
        return sqrt(1+x);
    }
    else
    {
        return sqrt(n+fun(n-1,x));
    }
}