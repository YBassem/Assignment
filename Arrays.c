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


void bubbleSortDes(int* arr ,int len){
    for(int i= 0 ;i<len;++i){
        for(int  j = len -1 ;j>=i ;--j){
            if(arr[j]>arr[j-1]){
                swap1(&arr[j],&arr[j-1]);
            }
        }
    }
}


int getMax(int* arr ,int len){
    int max = arr[0];
    for(int i=1;i<len;++i){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int* arr ,int len){
    int min = arr[0];
    for(int i=1;i<len;++i){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

float getAvg(int* arr,int len){
    float sum = 0;
    for(int i=0;i<len;++i){
        sum+=arr[i];
    }
    return (sum/len);
}

int Sequential_Search(int* arr,int len,int target){
    for(int i = 0;i<len;++i){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int rec_BinarySearch(int* arr,int len,int target,int low,int high){
    
    int mid =(low+high)/2;
    if(low > high){
        return -1;
    }
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        rec_BinarySearch(arr,len,target,mid + 1,high);
    }else{
         rec_BinarySearch(arr,len,target,low,mid-1);
    }   
    
   
}

int getSecMax(int* arr ,int len){
    int max1 = getMax(arr,len);
    int max2 =arr[0];

    for(int i=1;i<len;++i){
        if(arr[i]>max2 && arr[i]<max1){
            max2 =arr[i];
        }
    }
    return max2;
}

void revArr(int* arr,int len){
    for(int i = 0;i<len/2;++i){
        swap1(&arr[i],&arr[len  - i -1]);
    }
}

void removeDuplicates(int* arr,int size,int* newSize){

    

    int* newArr = malloc(size * sizeof(int));
    *newSize = 0;
    newArr[(*newSize)++] = arr[0];
    int flag  = 0;
    for (int i = 1; i < size; ++i) {
        if(Sequential_Search(newArr,*newSize,arr[i])==-1){
            newArr[(*newSize)++] = arr[i];
        }
    }

    
    for (int i = 0; i < *newSize; ++i) {
        arr[i] = newArr[i];
    }

    free(newArr); 
}

int freqArr(int* arr,int len){
    int freq[len*10] ;
    for(int i = 0;i<len;++i){
        freq[arr[i]]++;
    }

    int max = getMax(freq,len*5);
    return Sequential_Search(freq,len*5,max);

}

int maxOcc(int* arr,int len,int target){
    int max = 0,count = 1;

    for(int i = 0;i<len;++i){
        if(arr[i]!=target){
            continue;
        }
        if(arr[i]==target && arr[i+1] ==target){
            count++;
            continue;
        }
        if(count>max)  {
            max = count;
            count = 1;
        }
    }
    return max;

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

    /*==========Problem 3==========*/
    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }

    bubbleSortDes(arr,size);

    printf("arr after sorting : ");
    for(int i=0;i<size;++i){
       printf("%d ",arr[i]);
    }*/

    /*==========Problem 4==========*/
    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }

    printf("The max = %d\n",getMax(arr,size));*/

    /*==========Problem 5==========*/

    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }

    printf("The min = %d\n",getMin(arr,size));*/


    /*==========Problem 6==========*/
    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    printf("%0.2f is the avg\n",getAvg(arr,size));*/

    /*==========Problem 7==========*/

    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    printf("Enter elem to search: ");
    int elem;
    scanf("%d",&elem);

    printf("Elem is at pos %d",Sequential_Search(arr,size,elem));*/


    /*==========EXTRA BINARY SEARCH==========*/
    //NOTE!!: ARRAY HAS TO BE SORTED
    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,size);
    printf("Enter elem to search: ");
    int elem;
    scanf("%d",&elem);

    printf("Elem is at pos %d",rec_BinarySearch(arr,size,elem,0,size -1));*/

    /*==========Problem 8==========*/

    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }

    printf("The second max = %d\n",getSecMax(arr,size));*/

    /*==========Problem 9==========*/

    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }

    revArr(arr,size);

    printf("arr after reversing : ");
    for(int i=0;i<size;++i){
       printf("%d ",arr[i]);
    }*/


    /*==========Problem 10==========*/
    /*int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int* arr = malloc(size * sizeof(int));
    printf("Enter array: ");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    int newSize;
    removeDuplicates(arr,size,&newSize);

    printf("arr after removing duplicates : ");
    for(int i=0;i<newSize;++i){
       printf("%d ",arr[i]);
    }*/

    /*==========Problem 11==========*/


    /*int x[] = {1,2,3,8,2,6,5,2,3,9,3,4,3,3,7,2};
    int size = sizeof(x)/sizeof(x[0]);
    printf("most occurrence element in the array is %d\n",freqArr(x,size));*/
    


   /*==========Problem 12==========*/

    /*int  x[] = {1, 1, 1, 5, 5, 5, 3, 3, 5, 5, 5, 5};
    int size = sizeof(x)/sizeof(x[0]);
    
    
    printf("Enter elem to search: ");
    int elem;
    scanf("%d",&elem);

    printf("max number of consecutive elements in an array %d\n",maxOcc(x,size,elem));*/


    

}