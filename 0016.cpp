#include<cstdio>
#include<cmath>
 
int main( int argc, char *argv[] ){
    int s,t;
    double x = 0,y = 0;
    double dis,angle,asum = 0;
     
    while( ! ( dis == 0 && angle == 0 ) )
    {
        scanf("%lf,%lf", &dis, &angle );
        x += dis * sin(asum);
        y += dis * cos(asum);
        asum += angle * M_PI / 180;
        if( asum > M_PI )
            asum -= 2 * M_PI;
        else if( asum < -M_PI )
            asum += 2 * M_PI;
    }
    s = x;
    t = y;
    printf("%d\n%d\n",s,t);
     
    return(0);
}
