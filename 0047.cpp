#include<cstdio>
 
int main( int argc, char *argv[] )
{
    int flag1 = 1, flag2 = 0, flag3 = 0;
    char a,b,hoge;
    while( scanf("%c%c%c%c",&a,&hoge,&b,&hoge) == 4 )
    {
        if( ( a == 'A' && b == 'B' ) || ( a == 'B' && b == 'A') )
        {
            if( flag1 )
            {
                flag2 = 1;
                flag1 = 0;
            }
            else if( flag2 )
            {
                flag1 = 1;
                flag2 = 0;
            }
        }
        else if( ( a == 'B' && b == 'C' ) || ( a == 'C' && b == 'B') )
        {
            if( flag2 )
            {
                flag3 = 1;
                flag2 = 0;
            }
            else if( flag3 )
            {
                flag2 = 1;
                flag3 = 0;
            }
        }
        else if( ( a == 'A' && b == 'C' ) || ( a == 'C' && b == 'A') )
        {
            if( flag1 )
            {
                flag3 = 1;
                flag1 = 0;
            }
            else if( flag3 )
            {
                flag1 = 1;
                flag3 = 0;
            }
        }
    }
    if( flag1 )
        printf("A\n");
    else if( flag2 )
        printf("B\n");
    else if( flag3 )
        printf("C\n");
    return(0);
}
