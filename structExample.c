#include <stdio.h>
#include <string.h>

struct student{char name[100];int rank; float cgpa;};
void stud(struct student s1);
void main(){
    struct student s1={"saifulhuq",1, 99.9};
    stud(s1);
}
void stud(struct student s1){
    printf("my name is %s",s1.name);
}