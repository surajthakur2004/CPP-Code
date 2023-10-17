#include<iostream>
using namespace std;

void duplicate(int arr[], int size)
{
    int num=INT16_MAX;
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
            cout<<arr[i]<<" ";
            arr[j]=num;
            num--;
            break;
            }
        }
    }
}
int main()
{
    int arr[8]={5,6,7,3,5,6,7,1};
    duplicate(arr, 8);
}