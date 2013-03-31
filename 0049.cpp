#include<cstdio>
#define KIND 4
 
int main(void){
     
    int i,hoge;
    int blood[KIND] = { 0 };
    char c;
     
    while( scanf("%d,%c",&hoge,&c) == 2 ){
        if( c == 'A' ){
            c = getchar();
            if( c == 'B' )
                blood[2]++;
            else
                blood[0]++;
        }
        else if( c == 'B' )
            blood[1]++;
        else if( c == 'O')
            blood[3]++;
        if( c == EOF )
            break;
    }
    for( i = 0; i < KIND; i ++ ){
        printf("%d\n", blood[i]);
    }
     
    return(0);
}
