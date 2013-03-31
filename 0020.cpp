#include<cstdio>
int main(void)
{
    int i = 0;
    char n;
    char a[10000] = { 0 };
    while( scanf("%c",&n) == 1)
    {
        int flag1 = 0,flag2 = 0;
        if( !flag2 )
        {
            if( 'A' <= n && n <= 'Z' )
            {
                n += 32;
                flag1++;
            }
        }
        if( !flag1 )
        {
            if( 'a' <= n && n <= 'z' )
                n -= 32;
            flag2++;
        }
        a[i] = n;
        i++;
    }
    printf("%s",a);
    return(0);
}
