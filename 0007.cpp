#include<cstdio>
#include<cmath>
 
int main( void )
{
    int i,n;
    float tmp,sum;
    double b;
    int a = 100000;
    scanf("%d",&n);
    for( i = 1; i <= n; i++ )
    {
        sum = a * 1.05;
        tmp = sum / 1000;
        b = ceil(tmp);
        a = b * 1000;
    }
    printf("%d\n",a);
    return(0);
}
