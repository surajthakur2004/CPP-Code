#include<iostream>
using namespace std;

void intersection(int arr[],int n,int arr1[],int n1) 
{
    int num=INT32_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n1; j++)
        {
            if (arr[i]==arr1[j])
            cout << arr[i]<<" ";
            arr1[j]=num;
            num--;
        }
    }
}

int main()
{
    int arr[6]={4,6,8,4,45,2};
    int arr1[7]={45,9,5,8,7,4,2};
    intersection(arr,6,arr1,7);
    return 0;
}