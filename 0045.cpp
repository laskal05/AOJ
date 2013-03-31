#include<cstdio>
 
int main( void ){
     
    int price, num;
    int sum = 0, count = 0;
    int ans;
    double snum = 0.0, tmp;
     
    while( scanf( "%d,%d", &price, &num ) == 2 ){
        sum += price * num;
        snum += num;
        count++;
    }
    tmp = ( (int)( ( snum / count ) * 10 ) % 10 );
    ans = (int)( snum / count );
    if( tmp >= 5.0 )
        ans += 1;
    printf("%d\n%d\n", sum, ans );
    return (0);
}
