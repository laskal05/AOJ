#include<cstdio>

int main ( int argc, char *argv[] ){
    int n,score = 0;
    char event[8];
    int runner = 0,count = 0;
    scanf("%d",&n);
    n = n * 3;
    while( count != n ){
        scanf("%s",event);
        if( event[0] == 'H' ){
            if( event[1] == 'I' ){
                if( runner == 3 ){
                    score++;
                }
                else{
                    runner++;
                }
            }
            else if( event[1] == 'O' )
            {
                score = score + runner + 1;
                runner = 0;
            }
        }
        if( event[0] == 'O' ){
            count++;
            if( count % 3 == 0 ){
                printf("%d\n",score);
                runner = 0;
                score = 0;
            }
        }
    }
    return(0);
}
