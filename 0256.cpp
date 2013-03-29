#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(){
	
	int i, n;
	int res = 0;
	
	for( i = 0; i < 10; i++ ){
		scanf("%d",&n);
		res += n;
	}
	printf("%d\n",res);
	return 0;
}
