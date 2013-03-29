#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(){
	
	int b1, b2, b3;
	scanf("%d %d %d", &b1, &b2, &b3 );
	if( b1 && b2 || b3 )
		printf("Open\n");
	else
		printf("Close\n");
	
	return 0;
}
