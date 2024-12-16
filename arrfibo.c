#include <stdio.h>

void main(){

    int n;
    printf("Enter value: ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;

    for (int i = 2; i < n; i++)
    {
        fib[i]= fib[i-1]+fib[i-2];// important
        printf("%d \t", fib[i]);
    }
    return;
    
}