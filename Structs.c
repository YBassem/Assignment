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


typedef struct 
{
    int hours;
    int min;
}Time;


Time* timeDiff(Time* t1,Time* t2){
    Time* t3 = (Time*)malloc(sizeof(Time*));
    if(t1->hours<=t2->hours){
        t3->hours = t2->hours - t1->hours -1;
    }else{
        t3->hours = t2->hours + 11 - t1->hours  ;
    }
    if(t2->min <t1->min){
        t3->min = t2->min +60- t1->min;
        return t3;
    }

    if(t1->min == t2->min){
        t3->min = 0;
        return t3;
    }

    t3->min = 60 - (t2->min-t1->min);


    
    return t3;
}




typedef struct{
    char* name;
    long unsigned int id;
    int age; 
    float gpa;
}Student;


void printStudent(Student s){
    printf("Student name is %s\nAge = %d\nStudent ID: %lu\nStudent CGPA: %0.2f\n",s.name,s.age,s.id,s.gpa);
}
  
int main(){

    /*=============Problem 1==============*/

    /*Student s1 ;
    s1.name = "Youssef";
    s1.age = 20;
    s1.id = 1220212;
    s1.gpa = 3.82;
    printStudent(s1);*/

    
    /*=============Problem 2==============*/
    /*Time  t1 = {11,30};//Departur time
    Time t2 = {1,10};//Arrival Time

    Time* t3 = timeDiff(&t1,&t2);//Trip time
    
    printf("Trip Time is %d hours and %d minutes\n",t3->hours,t3->min);*/
    


}