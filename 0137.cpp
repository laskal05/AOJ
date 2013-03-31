#include<cstdio>
 
int main()
{
        int n;
        int i, j;
        int a[12][100000];
 
        scanf("%d",&n);
        for( i = 0; i < n; i++ ){
                scanf("%d",&a[0][i]);
                for( j = 1; j < 11; j++ ){
                        a[j][i] = a[ j - 1 ][i] * a[ j - 1 ][i];
                        a[j][i] = ( a[j][i] / 100 ) % 10000;
                }
        }
        for( i = 0; i < n; i++ ){
                printf("Case %d:\n", i + 1 );
                        for( j = 1; j < 11; j++ )
                                printf("%d\n",a[j][i]);
        }
        return 0;
}
