/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>


int main()
{
    int arr[8]={1,3,2,4,6,8,7,5};
    int n=8;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minidx=j;
                
            }
        }
        //swap the min and first element of unsorted part
        //swap minidx and if
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    

    return 0;
}