#include <stdio.h>
#include <stdlib.h>

void swap1( int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int* arr ,int len){
    for(int i= 0 ;i<len;++i){
        for(int  j = 0 ;j<len - i - 1 ;++j){
            if(arr[j]>arr[j+1]){
                swap1(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main(){
    /*==========Problem 1==========*/
    /*int x = 0x11223344;
    char* ptr = &x;

    printf("%x",*ptr);*/

    /*==========Problem 2==========*/
    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr,size);

    printf("arr after sorting : ");
    for(int i=0;i<size;++i){
       printf("%d ",arr[i]);
    }*/

    

}