// write a program to merge two different arrays.

#include<stdio.h>
int main(){
    int arr1[]={4,13,35,12,22};
    int arr2[]={5,7,19,25,17,33};
    int n1=5,n2=6;
    int merged[20];
    int i,j;
    for(i=0;i<5;i++){
        merged[i]=arr1[i];
    }
    for(j=0;j<6;j++){
        merged[i+j]=arr2[j];
    }
    printf("The merged array is:");
    for(i=0;i<n1+n2;i++){
        printf("  %d  ",merged[i]);
    }
    return 0;
}
