#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Person
{
    char* name;
    int age;
};

void createPerson(struct Person *p,char* name,int age){
    p->name = malloc(strlen(name)+1);
    strcpy(p->name,name);
    p->age = age;
}

void printPerson(struct Person *p){
    printf("Your name is %s\nAge: %d\n",p->name,p->age);
}



int main(){
    struct Person p1;
    createPerson(&p1,"Youssef",20);
    printPerson(&p1);

}