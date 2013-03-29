#include<cstdio>
int main(void)
{
    float a,b,c,d,e,f;
    float x,y;
    while( scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f) == 6 )
    {
        if((a == 0 && b == 0)||(c == 0 && d == 0))
        {
            x = 0;
            y = 0;
        }
        x = ( e * c - b * f ) / ( a * e - b * d );
        y = ( c * d - a * f ) / ( b * d - a * e );
        if( a == 0 )
        {
            y = c / b;
            x = ( f - e * y ) / d;
        }
        if( b == 0 )
        {
            x = c / a;
            y = ( f - d * x ) / e;
        }
        if( d == 0 )
        {
            y = f / e;
            x = ( c - b * y ) / a;
        }
        if( e == 0 )
        {
            x = f / d;
            y = ( c - a * x ) / b;
        }
        if( x == -0.000 )
            x = 0.000;
        if( y == -0.000 )
            y = 0.000;
        printf("%5.3f %5.3f\n",x,y);
    }
    return(0);
}
