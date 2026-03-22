#include<stdio.h>
int main(){
 int arr[]={9,2,3,8,7};
 int n=5,i,curr,prev;
 for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
 }
 for(i=1;i<n;i++){
 curr=arr[i];
 prev=i-1;
    while(prev>=0 &&arr[prev]>curr){
    arr[prev+1]=arr[prev];
    prev--;
 }
 arr[prev+1]=curr;
 }
 printf("After Insertion Sort\n");
 for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
 }
return 0;
}