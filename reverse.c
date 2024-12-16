#include <stdio.h>

void rev(int *arr,int n);
void print(int *arr,int n);


void main(){
    int arr[] ={1,2,3,4,5,6};
    rev(arr,6);
    print(arr,6);
    return;


}

//this for change first value to last
void rev(int *arr,int n){ 
    for (int i = 0; i < n/2; i++)
    {
        int first = arr[i];
        int second = arr[n-i-1];
        arr[i] = second;
        arr[n-i-1] = first;
    }
    
    return;
}
//this will help to print the value to terminal
void print(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",arr[i]);
    }
    return;
    
}