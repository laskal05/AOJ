#include<cstdio>
 
int main( int argc, char *argv[] )
{
    int a,b,c;
    int sum1,sum2;
    int x,y,z;
    int n1,n2;
    while( 1 )
    {
        scanf("%d %d %d",&a,&b,&c);
        if( a == -1 && b == -1 && c == -1 )
            break;
        sum1 = a * 3600 + b * 60 + c;
        n1 = 7200 - sum1;
        x = n1 / 3600;
        y = ( n1 % 3600 ) / 60;
        z = ( n1 % 3600 ) % 60;
        if( y >= 10 && z >= 10 )
        {
            printf("0%d:%d:%d\n",x,y,z);
        }
        else if( z >= 10 )
        {
            printf("0%d:0%d:%d\n",x,y,z);
        }
        else if( y >= 10 )
        {
            printf("0%d:%d:0%d\n",x,y,z);
        }
        else
        {
            printf("0%d:0%d:0%d\n",x,y,z);
        }
        sum2 = sum1 * 3;
        n2 = 21600 - sum2;
        x = n2 / 3600;
        y = ( n2 % 3600 ) / 60;
        z = ( n2 % 3600 ) % 60;
        if( y >= 10 && z >= 10 )
        {
            printf("0%d:%d:%d\n",x,y,z);
        }
        else if( z >= 10 )
        {
            printf("0%d:0%d:%d\n",x,y,z);
        }
        else if( y >= 10 )
        {
            printf("0%d:%d:0%d\n",x,y,z);
        }
        else
        {
            printf("0%d:0%d:0%d\n",x,y,z);
        }
    }
    return(0);
}
