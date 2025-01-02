//Write a program to check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int chars(char *ch);

int main(void){
    char ch[] = "abcstba\0";
    if (chars(ch))
    {
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
}
    
int chars(char *ch){
    int len = strlen(ch);
    for (int i = 0; i < len /2; i++)
    {
        if (ch[i]!=ch[len-i-1])
        {
            return 0;
        }
        
    }
    return 1;
    
}


