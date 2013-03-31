#include<cstdio>
int main(void)
{
    int out,f,i,d;
    int j = 0,count[1000];
    for( i = 0; i < 1000; i++ )
        {
            count[i] = 0;
        }
    out = scanf("%d",&d);
    while( out != EOF )
        {
            for( i = d; i < 600; i = i + d )
                {
                    f = d * ( i * i );
                    count[j] = count[j] + f;
                }
            j++;
            out = scanf("%d",&d);
        }
        for( i = 0; i < j; i++ )
            printf("%d\n",count[i]);
    return(0);
}
