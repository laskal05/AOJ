#include<cstdio>
#include<cstdlib>
#include<algorithm>
 
using namespace std;
 
int main(){
 
	int n, i = 8;
	int ma1, ma2, ma3 = 0;
 
    scanf("%d",&ma1);
    scanf("%d",&n);
    if( ma1 < n ){
		ma2 = ma1;
        ma1 = n;
    }
    else
        ma2 = n;
 
    while( i-- ){
        scanf("%d",&n);
        if( ma1 < n ){
   		    ma3 = ma2;
            ma2 = ma1;
            ma1 = n;
        }
        else if( ma2 < n ){
            ma3 = ma2;
            ma2 = n;
        }
  	    else if( ma3 < n )
			ma3 = n;
	}
    printf("%d\n%d\n%d\n", ma1, ma2, ma3);
    return 0;
}
