#include<cstdio>
int main(void)
{
    int w,n;
    int x,y,i,p;
    int a[31],b[31];
    scanf("%d",&w);
    scanf("%d",&n);
    for( i = 1; i <= w; i++ )
        {
            a[i] = i;
        }
    for( i = 1; i <= n; i++ )
        {
            scanf("%d,%d",&x,&y);
            p = a[x];
            a[x] = a[y];
            a[y] = p;
        }
    for( i = 1; i <= w; i++ )
        {
            printf("%d\n",a[i]);
        }
    return(0);
}
