#include<cstdio>

int main(void)
{
    int n,j;
    int i = 0;
    int a[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    int b[10] = { 0 };
    while( scanf("%d",&n) == 1 )
    {
    i = 0;
    while( 1 )
    {
        if( n == 0 || n == 1 )
        {
            b[i] = n;
            break;
        }
        else if( n % 2 )
            b[i] = 1;
        else if( n % 2 == 0 )
            b[i] = 0;
        n = n / 2;
        i++;
    }
    for( j = 0; j <= i; j ++ )
    {
        if( b[j] == 1 )
        {
            printf("%d",a[j]);
            b[j] = 0;
            if( j < i )
                printf(" ");
        }
    }
    printf("\n");
    }
    return(0);
}
