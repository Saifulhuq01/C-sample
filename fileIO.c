#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");
    //read a txt file 
    // char ch[100];
    // fscanf(fptr, "%s", &ch);
    // printf("%s",ch);
    // fclose(fptr);

    //write a text file
    // fprintf(fptr, "%s","mango");
    // fclose(fptr);


    //fgetc use to read a file
    // printf("%c",fgetc(fptr));
    // fclose(fptr);


    //fputc use to write a file pass only a single charater
    // fputc('m', fptr);
    // fputc('a', fptr);
    // fputc('n', fptr);
    // fputc('g', fptr);
    // fputc('o', fptr);
    // fclose(fptr);

    //read a sentence from file
    // char ch ;
    // ch =fgetc(fptr);
    // while (ch !=EOF)//EOF is defined as -1
    // {
    //     printf("%c", ch);
    //     ch=fgetc(fptr);
    // }
    // printf("\n");
    // fclose(fptr);

    
    int a;
    fscanf(fptr,"%d",&a);
    int b;
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    fptr =fopen("test.txt","w");
    fprintf(fptr,"%d",a+b);
    fclose(fptr);
    return 0;
    
}