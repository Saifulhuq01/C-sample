#include <stdio.h>


void Storetable(int arr[][10],int n, int m, int  number);

void main(){
    int table[2][10];
    Storetable(table,0,10,2);
    Storetable(table,1,10,3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t",table[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t",table[1][i]);
    }
    
    return;
}

void Storetable(int arr[][10],int n, int m, int  number){
    for(int i=0;i<m;i++){
        arr[n][i]= number* (i+1);
    }
}