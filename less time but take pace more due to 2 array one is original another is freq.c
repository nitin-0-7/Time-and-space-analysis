/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[8]={1,3,2,4,3,2,5,8};
    int freq[8]={0};
    for(int i=0;i<8;i++){
        freq[arr[i]]++;
        if(freq[arr[i]]==2){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}