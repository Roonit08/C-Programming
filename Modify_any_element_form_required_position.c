// Write a program to modify any element form a required position.

#include<stdio.h>
int main(){
    int arr[]={10,3,17,25,14};
    int n=5;
    int i,p,new_value;
    printf("Enter the position you want to modify:",n);
    scanf("%d",&p);
    printf("Enter new value:");
    scanf("%d",&new_value);
    arr[p-1]=new_value;
    printf("Modified Array is:");
    for(i=0;i<n;i++){
        printf("  %d  ",arr[i]);
    }
    return 0;
}
