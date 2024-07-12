#include <stdio.h>
#include <stdbool.h>

bool isMultiple(unsigned int x,unsigned int y){
    return y%x==0;
}

bool isPrime(unsigned int x){
    if(x==1 || x==2){
        return true;
    }
    for(int i=2;i<x;++i){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

void Calculator(int num1, int num2,char op){
    switch (op)
    {
    case '+':
        printf("The result = %d\n",num1+num2);
        break;
    case '-':
        printf("The result = %d\n",num1-num2);
        break;
    case '*':
        printf("The result = %d\n",num1*num2);
        break;
    case '/':
        printf("The result = %0.2f\n",(float)num1/num2);
        break;
    
    default:
        printf("Invalid Operator\n");
        break;
    }
}

int main(){
    /*unsigned int x,y;
    scanf("%d%d",&x,&y);
    if(isMultiple(x,y)){
        printf("%d is a multiple of %d\n",x,y);
    }else{
        printf("%d is not a multiple of %d\n",x,y);
    }*/

    /*unsigned int x;
    scanf("%d",&x);
    if(isPrime(x)){
        printf("%d is a prime number\n",x);
    }else{
        printf("%d is not a prime number\n",x);
    }*/

    /*char op;
    scanf("%c",&op);
    unsigned int x,y;
    scanf("%d%d",&x,&y);
    Calculator(x,y,op);
    */
   

    
   
    



    return 0;
}
