#include<cstdio>
int main( int argc, char argv[] ){
    
	int i,n;
    int a,b,c;
    
	scanf("%d",&n);
    for( i = 0; i < n; i++ ){
        scanf("%d %d %d",&a,&b,&c);
        a *= a;
        b *= b;
        c *= c;
        if( a == b + c )
            printf("YES\n");
        else if( b == a + c )
            printf("YES\n");
        else if( c == a + b )
            printf("YES\n");
        else
            printf("NO\n");
    }
	
    return(0);
}
