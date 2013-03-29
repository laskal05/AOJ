#include<cstdio>
#define LIM ( 1000000 )
int main( void )
{
    int table[ LIM ] = { 0 };
    int n;
    int i,j;
    for( j = 2; j < LIM; j++ )
    {
        if( table[j] )
            continue;
        for( i = j << 1; i < LIM; i += j )
        {
            table[i] = 1;
        }
    }
    while( scanf("%d",&n) == 1 )
    {
        int res = n - 1;
        for( i = 2; i <= n; i++ )
        {
            res -= table[i];
        }
        printf("%d\n",res);
    }
    return(0);
}
