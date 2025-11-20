// Write a program to calculate the sum of elements in array.

#include<stdio.h>
int main(){
    int arr[]={10,34,23,7,18};
    int i,sum=0;
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("The sum of Elements is: %d",sum);
    return 0;
}
