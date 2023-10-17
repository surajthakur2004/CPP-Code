#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[],int arr2[],int arr3[], int size1 , int size2, int size3)
{
    int i=0;
    int j=0 ,k=0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]>arr2[j])
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        else{
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }
    while(i<size1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int arr1[5]={1,3,5,7,8};
    int arr2[3]={2,4,6};
    int arr3[8];
    
    merge(arr1, arr2,arr3,5,3,8);

    for(int i=0;i<8; i++)
    {
        cout<<arr3[i]<<" ";
    }

}
