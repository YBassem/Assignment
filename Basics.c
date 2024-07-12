#include <stdio.h>

int main(){
    /*============Problem 1============*/
    /*int num1,num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    printf("Resut  = %f",(float)((num1 + num2) * 3) /2 - 10);*/

    /*============Problem 2============*/

    /*int num1,num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("%d is greater\n",num1);
        printf("Not Equal\n");
    }else if(num1<num2){
        printf("%d is greater\n",num2);
        printf("Not Equal\n");
    }else{
        printf("Equal\n");
    }*/

    /*============Problem 3============*/
    /*int x;
    printf("Enter number: ");
    scanf("%d",&x);

    if(x%2==0){
        printf("Even number\n");
    }else{
        printf("Odd Number\n");
    }*/

    /*============Problem 4============*/
    /*int x;
    printf("Enter number: ");
    scanf("%d",&x);

    if(!x){
       printf("%d is not prime\n",x);
       return 0;
    }
    if(x==1 || x==2){
        printf("%d is prime\n",x);
        return 0;
    }

    for(int i=2;i<x;++i){
        if(x%i==0){
            printf("%d is not prime\n",x);
            return 0;
        }
    }
    printf("%d is prime\n",x);*/

    /*============Problem 5============*/
    /*int x ;
    printf("Enter number: ");
    scanf("%d",&x);
    int temp = x;
    while(temp>1){
        if(temp%2!=0){
            printf("%d Not power of 2\n",x);
            return 0;
        }
        temp/=2;
    }
    printf("%d is power of 2\n",x);*/

    /*============Problem 6============*/
    /*int x ;
    printf("Enter number: ");
    scanf("%d",&x);
    if(!x){
        printf("%d! = 1\n",x);
        return 0;
    }
    int res = 1;
    for(int i = 2;i<=x;++i){
        res*=i;
    }
    printf("%d! = %d\n",x,res);*/

    /*============Problem 7============*/
    /*int x ;
    printf("Enter number: ");
    scanf("%d",&x);
    int temp = x;
    for(int i=1;i<=x;i+=2){
        temp-=i;
        if(temp<0){
            printf("%d is not perfect square\n",x);
            return 0;
        }
        if(temp==0){
            printf("%d is perfect square\n",x);
            return 0;
        }
    }*/
    /*============Problem 8============*/
    // Done in the session

    /*============Problem 9============*/
    /*printf("all prime number from 1 to 100: ");
    for(int i=1;i<=100;++i){
        
        int check = 0;
        for(int j=2;j<i;++j){
            if(i%j==0){
                check = 1;
                break;
            }
        }
        if(!check){
            printf("%d ",i);
        }
    }*/

    /*============Problem 10============*/

    /*for(int i=0;i<5;++i){
        for(register int space = 0 ;space<5-i-1;++space){
            printf(" ");
        }
        for(register int star =0 ;star<i+1;++star){
            printf("*");
        }
        for(register int star= 0;star<i;++star){
            printf("*");
        }
        printf("\n");
    }
    for(register int i=0;i<3;++i){
        for(register int star = 0;star<3;++star){
            printf("*");
        }
        for(register int space = 0 ;space < 3;++space){
            printf(" ");
        }
        for(register int star = 0;star<3;++star){
            printf("*");
        }
        printf("\n");
    }
    */

    



    return 0;
}
