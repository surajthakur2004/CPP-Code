#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i; j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);

        }
    }
}

int main()
{
    int arr[7]={4,6,9,10,2,1,5};
    bubble_sort(arr,7);
    for(int i=0; i<7; i++)
    cout<<arr[i] <<" ";
}