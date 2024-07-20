#include <stdio.h>
#include <stdlib.h>
#include "Strings.c"
struct Person
{
    char* name;
    int age;
};

void createPerson(struct Person *p,char* name,int age){
    p->name = malloc(Strlen(name)+1);
    Strcpy(p->name,name);
    p->age = age;
}

void printPerson(struct Person *p){
    printf("Your name is %s\nAge: %d\n",p->name,p->age);
}



int main(){

}