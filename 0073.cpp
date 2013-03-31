#include<cstdio>
#include<cmath>

int main(void)
{
    int h;
    float x;
    float a,s;
    while( 1 )
    {
        scanf("%f%d",&x,&h);
        a = sqrt( x / 2 * x / 2 + h * h );
        if( x == 0 && h == 0 )
            break;
        else
            s = ( x * x ) + 2 * a * x;
        printf("%10.6f\n",s);
    }
     
    return(0);
}
