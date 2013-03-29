#include<cstdio>
int main( int argc, char *argv[])
{
    int a,b,c;
    int gcd,lcm;
    int tmpa,tmpb;
    while( scanf("%d %d",&a,&b) == 2 )
    {
        tmpa = a;
        tmpb = b;
        c = a % b;
        while(1)
        {
            if( c == 0 )
            {
                gcd = b;
                lcm = ( tmpa / gcd ) * tmpb;
                break;
            }
            a = b;
            b = c;
            c = a % b;
        }
        printf("%d %d\n",gcd,lcm);
    }
    return(0);
}
