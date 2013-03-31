#include<cstdio>
#include<cstdlib>
#include<algorithm>

int main( int argc, char *argv[] )
{
    int n;
    double x1,x2,x3,x4;
    double y1,y2,y3,y4;
    double s,t;
    scanf("%d",&n);
    while( n-- )
    {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        s = ( y2 - y1 ) / ( x2 - x1 );
        t = ( y4 - y3 ) / ( x4 - x3 );
        if( s == t )
            printf("YES\n");
        else
            printf("NO\n");
    }
    return(0);
}
