#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(
	int argc,
	char *argv[]
){
	
	int n, i;	
	int s = 2;
	int a[10002] = { 0 };

	a[1] = 2;
	for( i = 1; i < 10001; i++ ){
		a[ i + 1 ] = a[i] + s;
		s++;
	}
	
	
	
	while( scanf("%d",&n) == 1 ){
		printf("%d\n",a[n]);
	}
	return ( EXIT_SUCCESS );
}
