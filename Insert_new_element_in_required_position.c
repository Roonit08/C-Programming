// Write a program to insert a new element at required position.

#include<stdio.h>
int main(){
    int arr[10]={10,6,23,35,18,4};
    int n=6;
    int i,a,p;
    printf("Enter the position where you want to insert:",n+1);
    scanf("%d",&p);
    printf("Enter the element:");
    scanf("%d",&a);
    for(i=n;i>=p;i--){
        arr[i]=arr[i-1];
    }
    arr[p-1]=a;
    n++;
    printf("The new array list is: ");
    for(i=0;i<n;i++){
        printf("  %d  ",arr[i]);
    }
    return 0;
}
