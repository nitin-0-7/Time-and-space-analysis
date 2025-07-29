/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[9]={6,3,4,2,1,6,7,8,5};
    int sum=0;
    int n=8;
    int sumi=n*(n+1)/2;
    printf("The duplicate is\n");
    for(int i=0;i<9;i++){
        sum+=arr[i];     //true only for one duplicate
    }
    int d=sum-sumi;
    printf("%d",d);

    return 0;
}