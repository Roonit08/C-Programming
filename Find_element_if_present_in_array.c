// Write a program to find an element if it is present in an array and also find the position of that element.

#include<stdio.h>
int main(){
    int arr[]={3,9,17,35,14,29};
    int i,search,found=0;
    printf("Enter a number:");
    scanf("%d",& search);
    for(i=0;i<6;i++){
        if(arr[i]==search){
            found = 1;
            break;
        }
    }
    if(found==1){
        printf("The searched number is:%d \n",search);
        printf("The position of number is:%d",i+1);
    }else{
        printf("The number is not present in the array.");
    }
    return 0;
}
