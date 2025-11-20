// Write a program to print the maximum value element in array.

#include<stdio.h>
int main(){
    int arr[]={7,15,4,29,34,13};
    int i,max;
    max =arr[0];
    for(i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The maximum number is:%d",max);
    return 0;
}
