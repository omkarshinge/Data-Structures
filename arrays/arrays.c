#include <stdio.h>
void main()
{
    printf("Lab work on Arrays\n");

    //Information source : Geeks For Geeks

    // Array declaration by specifying size
    // int arr1[10];

    // With recent C/C++ versions, we can also
    // declare an array of user specified size
    // int n = 10;
    // int arr2[n];

    // Array declaration by initializing elements
    // int arr[] = { 10, 20, 30, 40 }
    // Compiler creates an array of size 4.
    // above is same as  "int arr[4] = {10, 20, 30, 40}"

    // Array declaration by specifying size and initializing
    // elements
    // int arr[6] = { 10, 20, 30, 40 }

    // Compiler creates an array of size 6, initializes first
    // 4 elements as specified by user and rest two elements as
    // 0. above is same as  "int arr[] = {10, 20, 30, 40, 0, 0}"

    //Array initialization and printing using for loop
    printf("\nAddress and values of elements stored in array \n");
    int arr[5] = {10,30,20,40,60};
    for(int i = 0; i < 5; i++){
        printf("arr[%d] address : %p\t", i, &arr[i]);
        printf("value : %d\n", arr[i]);
    }
    printf("\nPrinting same array data above using other method \n");
    for(int i = 0; i < 5; i++){
        printf("arr[%d] address : %p\t", i, &i[arr]);
        printf("value : %d\n", i[arr]);
    }
}