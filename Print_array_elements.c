// Write a Program to print the elements of array.

#include<stdio.h>
int main(){
    int a[]={10,16,23,8,12};
    int i;
    printf("The elements of Array are:\n");
    for(i=1;i<=5;i++){
        printf("%d\n",a[i-1]);
    }
    return 0;
}
