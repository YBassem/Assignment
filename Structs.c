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


typedef struct{
    int data;
    struct SinglyNode* next;

}SinglyNode;


typedef struct{
    SinglyNode*head;
}SinglyLinkedList;


void initNode(SinglyNode* newNode, int val, SinglyNode* nex) {
    newNode->data = val;
    newNode->next = nex;
}

void createLinkedList(SinglyLinkedList* L) {
    L->head = NULL;
}

void insert_At_First(SinglyLinkedList* L, int val) {
    SinglyNode* cur = (SinglyNode*)malloc(sizeof(SinglyNode));
    initNode(cur, val, L->head);
    L->head = cur;
}

void insert_At_End(SinglyLinkedList* L, int val){
    SinglyNode* cur = (SinglyNode*)malloc(sizeof(SinglyNode));
    if(!L->head){
        initNode(cur, val, L->head);
        L->head = cur;
        return;
    }
    initNode(cur, val, NULL);
    SinglyNode* newNode = L->head;
    while (newNode->next)
    {
        newNode = newNode ->next;
    }

    newNode->next = cur;
    
}

void printLinkedList(SinglyLinkedList* L) {
    SinglyNode* cur = L->head;
    while (cur) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}




int main(){
    

    

}