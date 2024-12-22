#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    //malloc
    float *ptr;
    ptr = (float*) malloc(5*sizeof(float));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    for (int i = 0; i < 5; i++)
    {
        printf("%f \n",ptr[i]);
    }
    */

    /*
    //calloc
    int *ptr;
    ptr = (int*) calloc(5,sizeof(int));
    // ptr[0]=1;
    // ptr[1]=2;
    // ptr[2]=3;
    // ptr[3]=4;
    // ptr[4]=5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",ptr[i]);
    }
    */

   /*
   //free - its allocate extra memory both malloc, calloc
    int *ptr;
    ptr = (int*) calloc(5,sizeof(int));
    // ptr[0]=1;
    // ptr[1]=2;
    // ptr[2]=3;
    // ptr[3]=4;
    // ptr[4]=5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",ptr[i]);
    }
    free(ptr);
    ptr = (int*) calloc(5,sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",ptr[i]);
    }

    */



   //realloc
   int *ptr;
   ptr = (int*) calloc(5,sizeof(int));
   printf("Enter 5 number:");
   for (int i = 0; i < 5; i++){
    scanf("%d",&ptr[i]);
   }
   ptr = realloc(ptr,8);
   printf("Enter 8 number:");
   for (int i = 0; i < 8; i++){
    scanf("%d",&ptr[i]);
   }
   //Need to print
   for (int i = 0; i < 8; i++){
    printf("number %d is %d \n",i,ptr[i]);
   }
   return 0;
}
