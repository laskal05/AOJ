#include<cstdio>
#include<cstdlib>
#include<algorithm>
#define CONS 4280

using namespace std;

int main(){
	
	while( 1 ){

		int w;
		int res = 1150;
		
		scanf("%d",&w);

		if( w == -1 ) break;
		w -= 10;
		
		if( w <= 0 ){
			
		}
		else if( w <= 10 ){
			res += 125 * w;
		}
		else{
			res += 1250;
			w -= 10;
			if( w <= 10 ){
				res += 140 * w;
			}
			else{
				res += 1400;
				w -= 10;
				if( w <= 10 ){
					res += 160 * w;
				}
				else{
					res += 160 * w;
				}
			}
		}
		printf("%d\n", CONS - res);
	}
	return 0;
}
