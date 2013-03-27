#include<cstdio>
int main()
{
	
	double l, r;
	int count[5][2] = { { 0 }, { 0 }, { 0 }, { 0 }, { 0 } };

	while( scanf("%lf %lf",&l, &r) == 2 )
	{
		if( l >= 1.1 )
			count[0][0]++;
		else if( l >= 0.6 && l < 1.1 )
			count[1][0]++;
		else if( l >= 0.2 && l < 0.6 )
			count[2][0]++;
		else
			count[3][0]++;
		if( r >= 1.1 )
			count[0][1]++;
		else if( r >= 0.6 && r < 1.1 )
			count[1][1]++;
		else if( r >= 0.2 && r < 0.6 )
			count[2][1]++;
		else
			count[3][1]++;	
	}
	for( int i = 0; i < 4; i++ ){
		printf("%d %d\n",count[i][0], count[i][1] );
	}
	return 0;
}
