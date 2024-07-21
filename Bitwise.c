#include <stdio.h>
#include <stdlib.h>

/*=================Swapping Algorithms=================*/

void swap1(unsigned int* a,unsigned int* b){
    unsigned int temp = *a;
    *a=*b;
    *b=temp;
}

void swap2(unsigned int* a,unsigned int* b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}

void swap3(unsigned int* a,unsigned int* b){
    *a+=*b;
    *b=*a-*b;
    *a=*a-*b;
}

void swap4(unsigned int* a,unsigned int* b){
    *a=(*a)*(*b);
    *b=(*a)/(*b);
    *a=(*a)/(*b);
}

/*======================================================*/

/*=================Numbering System Coversions=================*/

unsigned int* DecToBin(unsigned int x , int len){
    unsigned int* arr = malloc(len* sizeof(unsigned int));
    for(int i=0;i<len;++i){
        arr[i]=0;
    }
    int k=0;
    while(x){
        arr[k++]=x%2;
        x/=2;
    }
    return arr;

}
long int rec_power(int base, int pow){
    if(pow==0){
        return 1;
    }
    long int res = base*rec_power(base,pow-1);
    return res;
}
unsigned int BinToDec(unsigned int* binary,unsigned int len){
    unsigned int dec = 0;
    for(int i=0;i<len;++i){
        dec+=rec_power(2,len-i -1)*binary[i];
    }
    return dec;
}

/*==============================================================*/

int main(){

    /*============Problem 1============*/
    
    /*unsigned char x ;
    printf("Enter number: ");
    scanf("%d",&x);
    printf("Bit no 4 = %d\n",(x>>4&1));*/

    // Problems 2,3,4 done in the session
    /*============Problem 5============*/
    /*unsigned char x ;
    printf("Enter number: ");
    scanf("%d",&x);
    x|=1;
    x|=1<<1;
    printf("%d After setting",x);*/

    /*============Problem 6============*/
    /*unsigned char x ;
    printf("Enter number: ");
    scanf("%d",&x);

    unsigned char bit_2 = (x>>2)&1;
    unsigned char bit_6 = (x>>6)&1;

    if(bit_2){
        x|=(1<<6);
    }else{
        x&= ~(1<<6);
    }

    if(bit_6){
        x|=(1<<2);
    }else{
        x&= ~(1<<2);
    }

    printf("Number after swapping = %d",x);
    */
    
    /*============Problem 8============*/

    /*unsigned int x =0b11110110;
    
    unsigned int* Bin = DecToBin(x,8);
    unsigned int res = BinToDec(Bin,8);
    printf("Result in hex = %X\n",res);
    printf("Result in Binary: ");
    for(int i=0;i<8;++i){
        printf("%d ",Bin[i]);
    }
    free(Bin);*/
    
    /*============Problem 9============*/
    
    /*unsigned int x;
    printf("Enter number: ");
    scanf("%d",&x);
    unsigned int* Bin = DecToBin(x,8);
    int Ones=0,Zeros = 0;
    for(int i=0;i<8;++i){
        if(Bin[i]==0){
            Zeros++;
        }else{
            Ones++;
        }
    }
    printf("The number of Ones = %d\n",Ones);
    printf("The number of Zeros = %d\n",Zeros);*/
    

    /*============Problem 10============*/

    /*unsigned int x = 0b11000110100111000001;
    unsigned int* Bin = DecToBin(x,20);
    int max=-1;
    int count = 0;
    for(int i=0;i<20;++i){
        if(Bin[i]==1){
            if(count>max){
                max = count;
            }
            count = 0;
        }else{
            count++;
        }
    }
    printf("There are %d consequtive zeros\n",max);*/

    /*============Problem 11============*/

    /*unsigned char x = 14;
    unsigned int input;
    printf("Enter number: ");
    scanf("%d",&input);

    printf("14 * %d = %d",input,x<<(input-1));*/

    //Problem 12 done in the session

    //Swap testings
    /*unsigned x =3,y=5;
    //swap1(&x,&y);
    //swap2(&x,&y);
    //swap3(&x,&y);
    //swap4(&x,&y);
    printf("%d\n%d",x,y);*/
    


    return 0;
}
