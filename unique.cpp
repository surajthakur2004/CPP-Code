#include<iostream>
#include<stdio.h>
using namespace std;

void unique(int arr[],int size)
{
    int i,j;
    for ( i=0; i<size; i++)
    {
        for ( j=0; j<size; j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
               break;
            }
        }
        if(j==size)
        cout<<arr[i]<<" ";
        
    }
}

int main()
{
    int arr[10]={5,2,4,8,5,4,2,7,6,6};
    unique(arr,10);
}