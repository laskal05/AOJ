#include<cstdio>
 
int main(void)
{
    int n;
	
    while( scanf("%d",&n) == 1 )
    {
        int a,b,c,d;
        int ans = 0;
        int sum = 0;
        for( a = 0; a < 10; a++ )
        {
            for( b = 0; b < 10; b++ )
            {
                for( c = 0; c < 10; c++ )
                {
                    for( d = 0; d < 10; d++ )
                    {
                        sum = a + b + c + d;
                        if( n == sum )
                            ans = ans + 1;
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
    return(0);
}
