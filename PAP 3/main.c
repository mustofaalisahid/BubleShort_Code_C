#include "pustaka.h"


int main()
{
    int menu;
    lagi :
    printf("PILIHAN MENU\n\n");
    printf("1. countArray\n");
    printf("2. cekUrut\n");
    printf("3. bubbleSort1\n");
    printf("4. bubbleSort2\n");

    printf("\nMasukkan pilihan : "); scanf("%d", &menu);
    printf("\n");

    switch(menu)
    {
    case 1:
        printf("\t\tCOUNT ARRAY\n\n");
        int a1[10]={NULL};
        int a2[10]={NULL};
        int a3[10]={NULL};
        int a4[10]={NULL};
        a1[0]=1; a1[1]=2; a1[2]=3; a1[3]=4; a1[4]=5; a1[5]=6;
        a2[0]=1; a2[1]=2; a2[2]=3; a2[3]=4;
        a3[0]=2; a3[1]=4; a3[2]=9; a3[3]=5; a3[4]=1;
        a4[0]=2; a4[1]=8; a4[2]=5;

        printf("countArray (a1) -> %d\n", countArray(a1));
        printf("countArray (a2) -> %d\n", countArray(a2));
        printf("countArray (a3) -> %d\n", countArray(a3));
        printf("countArray (a4) -> %d\n", countArray(a4));

        break; goto lagi;

    case 2:
        printf("\t\tCEK URUT\n\n");
        int arr1[] = { 3, 5, 38, 44, 47};
        int arr2[] = { 3, 44, 38, 5, 47 };
        int arr3[] = { 2, 15, 26, 27, 36 };
        int arr4[] = { 15, 36, 27, 2, 26 };
        printf("cekUrut (arr1) -> %s\n", (cekUrut(arr1)==1)?"true":"false");
        printf("cekUrut (arr2) -> %s\n", (cekUrut(arr2)==1)?"true":"false");
        printf("cekUrut (arr3) -> %s\n", (cekUrut(arr3)==1)?"true":"false");
        printf("cekUrut (arr4) -> %s\n", (cekUrut(arr4)==1)?"true":"false");

        break;

    case 3:
        printf("\t\tBUBBLE SORT 1\n\n");
        int arr1a[] = { 3, 44, 38, 5, 47 };
        int arr2a[] = { 15, 36, 27, 2, 26 };
        bubbleSort1(arr1a);
        printf("\n=================\n\n");
        bubbleSort1(arr2a);

        break;

    case 4:
        printf("\t\tBUBBLE SORT 2\n\n");
        int arr1b[] = { 3, 44, 38, 5, 47 };
        int arr2b[] = { 15, 36, 27, 2, 26 };
        bubbleSort2(arr1b);
        printf("\n=================\n\n");
        bubbleSort2(arr2b);

        break;
    }

    return 0;
}
