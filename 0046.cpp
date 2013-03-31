#include<cstdio>
int main(void)
{
    int j = 0,out,i;
    float a[1001];
    float max,min;
    for( i = 0; i < 1000; i++ )
        a[i] = 0;
    scanf("%f",&a[0]);
    while( out != EOF )
        {
            j++;
            out = scanf("%f",&a[j]);
        }
    if( a[0] < a[1] )
        {
            max = a[1];
            min = a[0];
        }
    else
        {
            max = a[0];
            min = a[1];
        }
    for( i = 2; i < j; i++ )
        {
            if( max < a[i] )
                {
                    max = a[i];
                }
            else if( min > a[i] )
                {
                    min = a[i];
                }
        }
    printf("%6.1f\n",max - min);
    return(0);
}
