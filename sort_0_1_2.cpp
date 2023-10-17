#include <iostream>
using namespace std;

// void sort(int arr[],int size)
// {
//     for(int i=1;i<size; i++)
//     {
//         int temp=arr[i];
//         int j=i-1;
//         for(j; j>=0;j--)
//         {
//             if(arr[j]>temp)
//             {
//                 arr[j+1]=arr[j];
//             }
//             else
//             break;
//         }
//         arr[j+1]=temp;
//     }
// }

void sort(int arr[],int size)
{
    
}

int main()
{
    int arr[6]={0,1,2,2,1,0};
    sort(arr, 6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}