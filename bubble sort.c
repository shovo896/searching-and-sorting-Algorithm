#include<stdio.h>
void bubbleSort(int array[],int size){
    for (int step = 0 ; size<step-1 ; ++step){
        for (int i =0 ; i<size-step-1;++i){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }






}
//print array
void printArray(int array[],int size){
for(int i=0 ; i<size;++i){
    printf("%d",array[i]);
}
printf("\n");
}
int main(){
int data[]={-2.445,0,11,-9};
int size=sizeof(data)/sizeof(data[0]);
bubbleSort(data,size);
printf("Sorted array in Ascending order:\n");
printArray(data,size);}

