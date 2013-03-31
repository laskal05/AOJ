#include<cstdio>
int main( void )
{
    int count[101],many[101];
    int i,k = 0,m,j = 1;
    int a,out;
    for( i = 0; i < 101; i++ )
        {
            count[i] = 0;
        }
    out = scanf("%d",&a);
    count[a] = count[a] + 1;
    while( out != EOF )
        {
            out = scanf("%d",&a);
            count[a] = count[a] + 1;
        }
    count[a] = count[a] - 1;
     
    for( i = 0; i < 101; i++ )
        {
            if( k < count[i] )
                {
                    k = count[i];
                    many[0] = i;
                    m = many[0] + 1;
                }
        }
         
    for( i = m; i < 101; i++ )
        {
            if( k == count[i] )
                {
                    many[j] = i;
                    j++;
                }
            }
    for( i = 0; i < j; i++ )
        {
            printf("%d\n",many[i]);
        }
    return(0);
}
