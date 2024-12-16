#include<stdio.h>

int main(){
    
    int num[4];
    int *ptr = &num[0];
    for(int i=0;i<4;i++){
        printf("%d value of    = ",i);
        scanf("%d",(ptr+i));
    }

    for (int i=0;i<4;i++)
    {
        printf(" %d value of   = %d \n",i,*(ptr+i));
    }
    
    return 0;
}