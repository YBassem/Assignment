#include <stdio.h>
#include <stdlib.h>

void toUpper(char* letter){
    int i=0;
    while (letter[i]!='\0')
    {
        letter[i]=letter[i] -32;
        i++;
    }
    
}


int Strlen(char* s){
    int i=0;
    while (s[i]!='\0')
    {
        
        i++;
    }
    return i;
}


void Strcpy(char* s1,char* s2){
    int i=0;
    while (s2[i]!='\0')
    {
        s1[i] = s2[i];   
        i++;
    }
    s1[i] = '\0';
}

char* Strconcat(char* s1,char* s2){
    char* newString = malloc((Strlen(s1)+Strlen(s2)+1)*sizeof(char));

    int i = 0,j = 0;
    do
    {
        newString[i] = s1[i];
        i++;
    } while (i<Strlen(s1));
    i = 0;
    do
    {
        newString[i +Strlen(s1) ] = s2[i];
        i++;
    } while (i<Strlen(s2));
    


    

    newString[Strlen(s1)+Strlen(s2)+1] = '\0';
    return newString;
    
    
}

int Strcmp(char* s1,char* s2){
    if(Strlen(s1) != Strlen(s2)){
        return 0;
    }

    int i = 0;
    while (s1[i] !='\0')
    {
        if(s1[i]!=s2[i]){
            return 0;
        }
        i++;
    }
    return 1;
    
}

void Revstr(char* s){
    for(int i=0;i<Strlen(s)/2;++i){
        char temp = s[i];
        s[i] = s[Strlen(s)-i -1];
        s[Strlen(s)-i-1]= temp;
    }
 
}

char check_mirror(char* arry){
    

    for(int i= 0;i<Strlen(arry)/2;++i){
        if(arry[i] != arry[Strlen(arry) - i -1]){
            return 0;
        }
    }
    return 1;

}


int main(){
    /*==========Problem 1==========*/
    /*char name[8] = "youssef";
    toUpper(name);

    printf("%s",name);*/

    /*==========Problem 2==========*/

    //char name[8] = "youssef";
    //printf("%d",Strlen(name));


    /*==========Problem 3==========*/
    /*char name[8] = "youssef";
    char namecpy[Strlen(name)+1];
    Strcpy(namecpy,name);
    printf("%s",namecpy);*/


    /*==========Problem 4==========*/
    /*char name1[8] = "youssef";
    char name2[7] = "bassem";

    char* newStr = Strconcat(name1,name2);
    printf("%s",newStr);*/

    /*==========Problem 5==========*/

    /*char name1[8] = "youssef";
    char name2[8] = "youssef";

    if(Strcmp(name1,name2)){
        printf("Same String \n");
    }else{
        printf("Not Same String \n");
    }*/

    /*==========Problem 6==========*/

    /*char name1[8] = "youssef";
    
    Revstr(name1);

    printf("%s",name1);*/

    /*==========Problem 7==========*/

    /*char str [] = "madam";

    if(check_mirror(str)){
        printf("mirror\n");
    }else{
        printf("not mirror\n");
    }*/





    

    
}