#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

//typedef to create and call shortcut name
typedef struct colleague{
    int roll;
    float cgpa;
    char name[100];
}col;


void printinfo(struct student s1);
void main(){
    // struct student ece[100];//initiated with array
    // ece[0].roll =1664;
    // ece[0].cgpa = 92.6;
    // strcpy(ece[0].name,"saiful");
    // printf("name = %s \t",ece[0].name);


    //struct student s1= {11, 99.9, "jack"};
    // printf("name = %s \t",s1.name);

    // //include pointer
    // struct student *ptr=&s1;
    // printf("pointer name = %s \t",(*ptr).name);
    // printf("pointer using arrow -> name = %s \t", ptr->name);


    struct student s1= {11, 92.9, "sai"};
    printinfo(s1);

     col s2={13,88.7,"huq"};
     printf("my cgpa is= %f", s2.cgpa);
    
}

void printinfo(struct student s1){
    printf("my name is= %s \t", s1.name);
}







