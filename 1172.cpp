#include<cstdio>
#define N 300000

int main ( void )
{
    int i,j,n;
    int d[N] = { 1, 1, 0 };
    for( i = 2; i < N; i++ )
    {
        if( d[i] ) continue;
        for( j = i * 2; j < N; j += i )
        {
            d[j] = 1;
        }
    }
    for( ; ; )
    {
        int count = 0;
        scanf("%d",&n);
        if( n == 0 )break;
        for( i = n + 1; i <= n * 2; i++ )
        {
            if( !d[i] )
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return(0);
}
