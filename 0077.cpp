#include<cstdio>
int main( int argc, char *argv[] )
{
    int i;
    char a1,a2,c;
    while( 1 )
    {
        c = getchar();
        if( c == EOF )
            break;
        else if( c == '@' )
        {
            scanf("%c",&a1);
            scanf("%c",&a2);
            for( i = 0; i < a1 - '0'; i++ )
            {
                printf("%c",a2);
            }
        }
        else
            printf("%c",c);
    }
    return(0);
}
