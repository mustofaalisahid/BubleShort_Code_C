#include "pustaka.h"

int countArray(int data[])
{
    int c;
    int jumlah=0;
    for(c=0; data[c]!=NULL; c++){
        jumlah=jumlah+1;
    }
    return jumlah;
}

int cekUrut(int data[])
{
    int benar=0;
    int c;

    for(c=0; c<5; c++){
        if(data[c]<data[c+1]){
                benar++;
        }
    }
    if(benar==4){return 1;}
    else {return 0;}
}

void bubbleSort1(int data[])
{
    int temp; ///penyimpanan
    int c, d, e;

    for(c=0; c<5; c++){
        for(e=0; e<5; e++){printf("%d  ", data[e]);};
        for(d=0; d<5-c-1; d++){
            if(data[d]>data[d+1]){
                temp = data[d];
                data[d] = data[d+1];
                data[d+1] = temp;
            }
        }
        printf("\n\n");
    }
}


void bubbleSort2(int data[])
{
    int temp; ///penyimpanan
    int c, d, e;

    for(c=0; c<5; c++){
        if(cekUrut(data)==0){
        for(e=0; e<5; e++){printf("%d  ", data[e]);};
        printf("\n\n");
        for(d=0; d<5-c-1; d++){
            if(data[d]>data[d+1]){
                temp = data[d];
                data[d] = data[d+1];
                data[d+1] = temp;
                };
            };
        }
    }
    for(e=0; e<5; e++){printf("%d  ", data[e]);};
    printf("\n\n");
}
