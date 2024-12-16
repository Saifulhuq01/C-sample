#include <stdio.h>
#include <string.h>

void salting(char password[]);
void slice(char arr[],int n,int m);
void main(){
    // char arr[100]="saifulhuq";
    // int leng = strlen(arr);
    // printf("%d",leng);


    // char newstr[]= "apple ";
    // char oldstr[]= "mac";
    // strcat( newstr,oldstr);
    // puts(newstr);
    // strcpy(newstr,oldstr);
    // puts(newstr);


    // char new[]= "Apple";
    // char old[] = "Apple";
    // printf("%d", strcmp(new,old));



    //salting passward practice
    // char passwrd[100];
    // scanf("%s",passwrd);
    // salting(passwrd);


    //slice
    char arr[]= "saifulhuq";
    slice(arr,2,6);
    
    return;
    
}
void slice(char arr[],int n,int m){
    char newstr[100];
    int j=0;
    for (int i = n; i <= m; i++,j++){
        newstr[j]= arr[i];
    }
    newstr[j]='\0';/*Without the null terminator, the program may access memory 
    beyond the intended range while interpreting newstr as a string.*/
    puts(newstr);
    
}

void salting(char password[]){
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass,password); /// newpass = "test";
    strcat(newpass,salt); //newpass = "test" +123;
    puts(newpass);
}