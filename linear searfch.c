#include<stdio.h>
int search(int array[],int n , int x ){
    for (int i = 0 ; i < n ; i++)
       if(array[i]==x)
        return i ;
    return -1  ;

}
int main(){
int array[]={2,4,0,9,1};
int x = 1 ;
int n = sizeof(array)/sizeof(array[0]);
int result=search(array,n,x);
(result==-1) ? printf("Element not found "): printf(" Element found at index:%d",result);







}
