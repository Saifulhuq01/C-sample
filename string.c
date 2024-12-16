#include <stdio.h>

void str(char arr[]);
int count(char arr[]);
int main(){
    //char arr[]="saifulhuq\0";
    //str(arr);


    //char str[100];
    //gets(str);//out dated
    //fgets(str,100,stdin); //fgets(str,n,stdio) this will stop @n-1 and move next line
    //puts(str);



    // char name[100];
    // fgets(name,100,stdin);
    // printf("%d",count(name));


    // below code for get string using %c 
    char arr[100];
    char ch;
    int i=0;

    while(ch != '\n'){
        scanf("%c",&ch);
        arr[i]=ch;
        i++;
    }
    puts(arr);



    return 0;
}

void str(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    return;
    
}

int count(char arr[]){
    int count =0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count-1;
    
}