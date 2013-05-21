#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(
	int argc,
	char *argv[]
){
	
	int i;
	int n, num;
	
	scanf("%d",&n);
	
	while( n-- ){
		
		int mx = 0, mn = 0;
		int a[10] = { 0 };	
		int c[10] = { 0 };
		int d[10] = { 0 };
		
		scanf("%d",&num);
		for( i = 0; i < 8; i++ ){
			a[i] = num % 10;
			c[a[i]]++;
			num /= 10;
		}
		for( i = 0; i < 10; i++ ){
			d[i] = c[i];
		}
		for( i = 0; i < 10; i++ ){
			while( c[i] ){
				mn += i;
				mn *= 10;
				c[i]--;
			}
		}
		for( i = 9; i >= 0; i-- ){
			while( d[i] ){
				mx += i;
				mx *= 10;
				d[i]--;
			}
		}
		printf("%d\n",( mx - mn ) / 10);	
	}
	return( EXIT_SUCCESS );
}
