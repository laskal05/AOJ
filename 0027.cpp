#include<cstdio>
 
int main( int argc , char *argv[] )
{
    int a ,b;
    scanf("%d %d",&a,&b);
    while( 1 )
    {
        if( a == 0 )
            break;
        if( a == 1 || a == 4 || a == 7 )
        {
            if( b % 7 == 1 )
                printf("Thursday\n");
            if( b % 7 == 2 )
                printf("Friday\n");
            if( b % 7 == 3 )
                printf("Saturday\n");
            if( b % 7 == 4 )
                printf("Sunday\n");
            if( b % 7 == 5 )
                printf("Monday\n");
            if( b % 7 == 6 )
                printf("Tuesday\n");
            if( b % 7 == 0 )
                printf("Wednesday\n");
        }
        if( a == 2 || a== 8 )
        {
            if( b % 7 == 1 )
                printf("Sunday\n");
            if( b % 7 == 2 )
                printf("Monday\n");
            if( b % 7 == 3 )
                printf("Tuesday\n");
            if( b % 7 == 4 )
                printf("Wednesday\n");
            if( b % 7 == 5 )
                printf("Thursday\n");
            if( b % 7 == 6 )
                printf("Friday\n");
            if( b % 7 == 0 )
                printf("Saturday\n");
        }
        if( a == 3 || a == 11)
        {
            if( b % 7 == 1 )
                printf("Monday\n");
            if( b % 7 == 2 )
                printf("Tuesday\n");
            if( b % 7 == 3 )
                printf("Wednesday\n");
            if( b % 7 == 4 )
                printf("Thursday\n");
            if( b % 7 == 5 )
                printf("Friday\n");
            if( b % 7 == 6 )
                printf("Saturday\n");
            if( b % 7 == 0 )
                printf("Sunday\n");
        }
        if( a == 5 )
        {
            if( b % 7 == 1 )
                printf("Saturday\n");
            if( b % 7 == 2 )
                printf("Sunday\n");
            if( b % 7 == 3 )
                printf("Monday\n");
            if( b % 7 == 4 )
                printf("Tuesday\n");
            if( b % 7 == 5 )
                printf("Wednesday\n");
            if( b % 7 == 6 )
                printf("Thursday\n");
            if( b % 7 == 0 )
                printf("Friday\n");
        }
        if( a == 6 )
        {
            if( b % 7 == 1 )
                printf("Tuesday\n");
            if( b % 7 == 2 )
                printf("Wednesday\n");
            if( b % 7 == 3 )
                printf("Thursday\n");
            if( b % 7 == 4 )
                printf("Friday\n");
            if( b % 7 == 5 )
                printf("Saturday\n");
            if( b % 7 == 6 )
                printf("Sunday\n");
            if( b % 7 == 0 )
                printf("Monday\n");
        }
        if( a == 9 || a == 12 )
        {
            if( b % 7 == 1 )
                printf("Wednesday\n");
            if( b % 7 == 2 )
                printf("Thursday\n");
            if( b % 7 == 3 )
                printf("Friday\n");
            if( b % 7 == 4 )
                printf("Saturday\n");
            if( b % 7 == 5 )
                printf("Sunday\n");
            if( b % 7 == 6 )
                printf("Monday\n");
            if( b % 7 == 0 )
                printf("Tuesday\n");
        }
        if( a == 10 )
        {
            if( b % 7 == 1 )
                printf("Friday\n");
            if( b % 7 == 2 )
                printf("Saturday\n");
            if( b % 7 == 3 )
                printf("Sunday\n");
            if( b % 7 == 4 )
                printf("Monday\n");
            if( b % 7 == 5 )
                printf("Tuesday\n");
            if( b % 7 == 6 )
                printf("Wednesday\n");
            if( b % 7 == 0 )
                printf("Thursday\n");
        }
    scanf("%d %d",&a,&b);
    }
    return(0);
}
