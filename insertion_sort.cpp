#include<iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{
    
    for(int i=1; i<size; i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(j;j>=0; j--)
        {
             if(arr[j]>temp)
             {
            
                 arr[j+1]=arr[j];
    
             }
             else
             {
                break;
             }
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int arr[6]={5,2,6,9,4,8};
    insertion_sort(arr,6);
    for(int i=0; i<6; i++)
    cout<<arr[i] <<" ";
}
