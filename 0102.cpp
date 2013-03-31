#include<cstdio>

int main(void){
    int i,j,n;
    int count1 = 0,count2 = 0;
    int a[12][12];
    while( scanf("%d",&n) == 1 ){
        if( n == 0 )
            break;
        for( i = 0; i < n; i ++ )
        {
            for( j = 0; j < n; j++ )
            {
                scanf("%d",&a[i][j]);
            }
        }
        for( i = 0; i < n; i ++ )
        {
            count1 = 0;
            count2 = 0;
            for( j = 0; j < n; j++ )
            {
                count1 += a[i][j];
                count2 += a[j][i];
            }
            a[i][n] = count1;
            a[n][i] = count2;
        }
        count1 = 0;
        for( i = 0; i < n; i++ )
        {
            count1 += a[i][n];
        }
        a[n][n] = count1;
        for( i = 0; i < n+1; i++ )
        {
            for( j = 0; j < n+1;j++ )
            {
                printf("%5d",a[i][j]);
            }
            printf("\n");
        }
    }
    return(0);
}
