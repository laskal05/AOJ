#include<cstdio>
#include<cstring>
int main( int argc, char *argv[] ){

    char str[1024];
    char *p;
	
    fgets( str, sizeof( str ), stdin );
    p = strchr( str, '\n' );
    while( p > str )
    {
        putchar( *(--p) );
    }
    puts( "" );
    return(0);
}
