#include<cstdio>
int main()
{
 
        int l, m, n;
 
        while( 1 ){
 
                int i = 0;
                int sum = 0;
                int ans = 0;
 
                scanf("%d",&l);
                if( l == 0 ) break;
                while( i < 12 ){
                        scanf("%d %d",&m, &n);
                        if( sum < l ){
                                ans++;
                        }
                        sum += m - n;
                        i++;
                }
                if( sum < l )
                        printf("NA\n");
                else
                        printf("%d\n",ans);
        }
        return 0;
}
