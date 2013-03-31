#include<cstdio>
 
int main(void)
{
    int i,j,tmp;
    int data[5] = { 0 };
    for( i = 0; i < 5; i++ )
        scanf("%d",&data[i]);
    for( i = 0; i < 4; i++ )
    {
        for( j = i + 1; j < 5; j++ )
        {
            if( data[i] < data[j] )
            {
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
    printf("%d ",data[0]);
    printf("%d ",data[1]);
    printf("%d ",data[2]);
    printf("%d ",data[3]);
    printf("%d\n",data[4]);
    return(0);
}
