#include<cstdio>
int main(void)
{
    int a;
    float b,c,bmi;
    while( scanf("%d,%f,%f",&a,&b,&c) == 3 )
    {
        bmi = b / ( c * c );
        if( bmi >= 25 )
            printf("%d\n",a);
    }
    return(0);
}
