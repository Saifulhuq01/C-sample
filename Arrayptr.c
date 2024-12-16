#include <stdio.h>

void array(int *arr, int n);

void main(){
    int arr[] = {1,2,3,4,5,6};
    printf("%d hello \n", *(arr+2));// jsut for checking porpose like also we use positon like this
    printf("%d hello \n", *(arr+6));
    array(arr,6);
    return;
}

void array(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return;
    
}