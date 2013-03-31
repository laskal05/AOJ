#include<cstdio>
int main( void )
{
    int n,k,i = 0,j = 0;
    int a[10000] = { 0 };
    int b[10000] = { 0 };
    while( scanf("%d",&n) == 1 )
    {
        if ( n )
        {
            a[i] = n;
            i++;
        }
        else
        {
            b[j] = a[i-1];
            j++;
            i--;
        }
    }
    for( k = 0; k < j; k++ )
    {
        printf("%d\n",b[k]);
    }
    return(0);
}
