#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main( int argc, char *argv[] )
{
	int a, b ,c;
	
	while( scanf("%d %d", &a, &b ) == 2 ){
		
		int count = 1;
		
		c = a + b;
		while( 1 ){
			if( c >= 10 ){
				count += 1;
				c /= 10;
			}
			else{
				break;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
