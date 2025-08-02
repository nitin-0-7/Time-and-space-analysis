#include<stdio.h>
int main(){
    int arr[9]={1,3,2,4,6,5,7,9,8};
    printf("Unsorted Array\n");
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
    for(int i=1;i<9;i++){
        int j=i;
        while( j>0 && arr[j]<arr[j-1]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
        
    }
    printf("\n");
    printf("Sorted Array\n");
    for(int i=0;i<9;i++){
            printf("%d ",arr[i]);
        }
    return 0;
}