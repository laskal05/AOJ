#include<cstdio>
#include<cstdlib>
#include<algorithm>

int main( void )
{
    int a[5],b[5];
    int i,j;
    int hit = 0,blow = 0;
    while( scanf("%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3]) == 8 )
    {
        for( i = 0; i < 4; i++ )
        {
            if( a[i] == b[i] )
            {
                hit++;
            }
        }
        for( i = 0; i < 4; i++ )
        {
            for( j = 0; j < 4; j++ )
            {
                if( a[i] == b[j] && i != j )
                {
                    blow++;
                }
            }
        }
        printf("%d %d\n",hit,blow);
        hit = 0;
        blow = 0;
    }
    return(0);
}
