#include<cstdio>
 
int main()
{
        int n;
        int i, j;
        int a[7] = { 0 };
        double tall;
 
        scanf("%d",&n );
        while( n-- ){
                scanf("%lf",&tall);
                if( tall < 165.0 )
                        a[1]++;
                else if( tall < 170.0 )
                        a[2]++;
                else if( tall < 175.0 )
                        a[3]++;
                else if( tall < 180.0 )
                        a[4]++;
                else if( tall < 185.0 )
                        a[5]++;
                else
                        a[6]++;
        }
 
        for( i = 1; i < 7; i++ ){
                printf("%d:",i);
                for( j = 0; j < a[i]; j++ ){
                        printf("*");
                }
                printf("\n");
        }
 
        return 0;
}
