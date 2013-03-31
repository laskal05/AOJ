#include<cstdio>
#include<cstdlib>
#include<algorithm>
 
int max = 0;
int ink[10][10];
 
void initialize(){
    int i,j;
    for( i = 0; i < 10; i++ ){
        for( j = 0 ; j < 10; j++ ){
            ink[i][j] = 0;
        }
    }
}
void square( int x, int y ){
    int i,j;
    for( i = x - 1; i < x + 2; i++ ){
        for( j = y - 1; j < y + 2; j++ ){
            if( i < 0 || j < 0 )
                continue;
            if( i >= 10 || j >= 10 )
                continue;
            ink[i][j]++;
            if( max < ink[i][j] )
                max = ink[i][j];
        }
    }
}
void projection( int x, int y, int n ){
    if( y - n >= 0 )
        ink[x][y-n]++;
    if( y + n <= 10 )
        ink[x][y+n]++;
    if( x - n >= 0 )
        ink[x-n][y]++;
    if( x + n <= 10 )
        ink[x+n][y]++;
}
int main( void ){
     
    int i,j;
    int x,y,size;
    int wcount = 0;
     
    initialize();
     
    while( scanf("%d,%d,%d",&x,&y,&size) == 3 ){
        if( size == 1 ){
            ink[x][y]++;
            if( max < ink[x][y] )
                max = ink[x][y];
            projection( x, y, 1 );
        }
        else if( size == 2 ){
            square( x, y );
        }
        else if( size == 3 ){
            square( x, y );
            projection( x, y, 2 );
        }
    }
    for( i = 0; i < 10; i++ ){
        for( j = 0 ; j < 10; j++ ){
            if( ink[i][j] == 0 )
                wcount++;
        }
    }
    printf("%d\n",wcount);
    printf("%d\n",max);
    return( 0 );
}
