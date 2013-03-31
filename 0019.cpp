#include<cstdio>
int main( int argc, char *argv[] )
{
    int i,n;
    unsigned long long int a;
    a = 1;
    while( scanf("%d",&n) == 1)
    {
        for( i = n; i > 0; i-- )
        {
            a = a * i;
        }
        printf("%lld\n",a);
        a = 1;
    }
return(0);
}
