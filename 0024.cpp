#include<cstdio>
#include<cstdlib>
#include<algorithm>

int main(void)
{
    int n;
    float t,v,y1,y2;
    while( scanf("%f",&v) == 1 )
    {
        t = v / 9.8;
        y1 = v * t / 2;
        for( n = 0;;n++ )
        {
            y2 = 5 * n - 5;
            if( y1 <= y2 )
            {
                printf("%d\n",n);
                break;
            }
        }
    }
    return(0);
}
