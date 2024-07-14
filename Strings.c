#include <stdio.h>


void toUpper(char* letter){
    int i=0;
    while (letter[i]!='\0')
    {
        letter[i]=letter[i] -32;
        i++;
    }
    
}



int main(){

    char name[8] = "youssef";
    toUpper(name);

    printf("%s",name);
    

    
}