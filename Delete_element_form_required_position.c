// Write a program to delete an element form a required position.

#include<stdio.h>
int main(){
    int arr[10]={10,4,19,35,23};
    int n=5;
    int i,p;
    printf("Enter the position to remove:",n);
    scanf("%d",&p);
    for(i=p-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("  %d  ",arr[i]);
    }
    return 0;
}
