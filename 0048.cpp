#include<cstdio>
 
int main( void )
{
    int j = 0,i,out;
    float a[1001];
    out = scanf("%f",&a[j]);
    while( out != EOF )
        {
            j++;
            out = scanf("%f",&a[j]);
        }
    for( i = 0; i < j; i++ )
        {
            if( 0 < a[i] && a[i] <= 48.00 )
                {
                    printf("light fly\n");
                }
            if( 48.00 < a[i] && a[i] <= 51.00 )
                {
                    printf("fly\n");
                }
            if( 51.00 < a[i] && a[i] <= 54.00 )
                {
                    printf("bantam\n");
                }
            if( 54.00 < a[i] && a[i] <= 57.00 )
                {
                    printf("feather\n");
                }
            if( 57.00 < a[i] && a[i] <= 60.00 )
                {
                    printf("light\n");
                }
            if( 60.00 < a[i] && a[i] <= 64.00 )
                {
                    printf("light welter\n");
                }
            if( 64.00 < a[i] && a[i] <= 69.00 )
                {
                    printf("welter\n");
                }
            if( 69.00 < a[i] && a[i] <= 75.00 )
                {
                    printf("light middle\n");
                }
            if( 75.00 < a[i] && a[i] <= 81.00 )
                {
                    printf("middle\n");
                }
            if( 81.00 < a[i] && a[i] <= 91.00 )
                {
                    printf("light heavy\n");
                }
            if( 91.00 < a[i] )
                {
                    printf("heavy\n");
                }
        }
    return(0);
}
