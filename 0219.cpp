#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(){
	
	while( 1 ){
		
		int i, j;
		int n, m;
		int a[10] = { 0 };
		
		scanf("%d",&n);
		if( n == 0 ) break;
	
		while( n-- ){
			scanf("%d",&m);
			a[m]++;
		}		
		for( i = 0; i < 10; i++ ){
			if( a[i] != 0 ){
				for( j = 0; j < a[i]; j++ ){
					printf("*");
				}
				printf("\n");
			}	
			else
				printf("-\n");
		}
	}
	return 0;
}
