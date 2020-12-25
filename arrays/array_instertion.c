#include<stdio.h>
void printArray(int arr[]);
void main(){
    int arr[10]={20,30,40,60,70,80,90};
    printf("Array before insertion\n");
    printArray(arr);
    printf("\nArray after insertion at first position\n");
    printArray(arr);
    printf("\nArray after insertion at last position\n");
    printArray(arr);
    printf("\nArray after insertion at middle position\n");
    printArray(arr);
}

void printArray(int arr[]){
    for(int i = 0; i < 10; i++){
        printf("arr[%d] :: address : %p :: value : %d\n",i,&arr[i],arr[i]);
    }
}