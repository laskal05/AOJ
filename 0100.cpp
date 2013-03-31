#include<cstdio>
#define MAX 4000
using namespace std;
 
struct Cell{
    int flag;
    unsigned long long int sum;
};
 
int main( int argc, char *argv[] ){
     
    int n;
    int price,amount;
    Cell a[MAX];
    int s[MAX];
    while( 1 ){
        int count = 0;
        for( int i = 0; i < MAX; i++ ){
            s[i] = 0;
            a[i].sum = 0;
            a[i].flag = 0;
        }
        scanf("%d",&n);
        if( !n ) break;
        for( int i = 0; i < n; i++ ){
            scanf("%d %d %d", &s[i], &price, &amount );
            a[s[i]].sum += price * amount;
        }
        for( int i = 0; i < n; i++ ){    
            if( a[s[i]].sum >= 1000000 && a[s[i]].flag == 0 ){
                printf("%d\n",s[i]);
                a[s[i]].flag = 1;
                count++;
            }
        }
        if( !count )
            puts("NA");
    }
    return 0;
}
