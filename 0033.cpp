#include<cstdio>

int main( void )
{
    int a, b = 0;
    int n, i, j, k;
    int c[10] = { 0 };
    scanf("%d",&n);
    for( i = 0; i < n; i ++ )
    {
        for( k = 0; k < 9; k ++ )
            scanf("%d ",&c[k]);
        scanf("%d",&c[9]);
        a = c[0];
        for( j = 1; j < 10; j++ )
        {
            if( a < c[j] && b < c[j] )
            {
                if( a > b )
                    a = c[j];
                else
                    b = c[j];
            }
            else if( a < c[j] )
                a = c[j];
            else if( b < c[j] )
                b = c[j];
            else
            {
                printf("NO\n");
                break;
            }
            if( j == 9 )
                printf("YES\n");
        }
        b = 0;
    }
    return(0);
}
