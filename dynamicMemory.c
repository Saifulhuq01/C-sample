#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *ptr;
    ptr = (int*) malloc(5*sizeof(ptr));
    printf("Enter 5 number");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",ptr[i]);
    }
    free(ptr);
    ptr = (int*) calloc(6,sizeof(ptr));
    for (int i = 0; i < 6; i++)
    {
        printf("%d",ptr[i]);
    }
    /* ptr = realloc(ptr,8);
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("you type these numbers");
    for (int i = 0; i < 8; i++)
    {
        printf("%d",ptr[i]);
    } */
    
    
}