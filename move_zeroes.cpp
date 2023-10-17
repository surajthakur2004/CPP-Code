//                                      <- method 1  ->
// #include<iostream>
// using namespace std;

// void MergeZeroes(int arr[], int size)
// {
//     for(int i=0; i<size-1;i++)
//     {
//         int end=size-1;
//         int temp=arr[i];
//         if(arr[i]==0)
//         {
//             for(int j=i+1; j<size; j++)
//             {
//                 arr[j-1]=arr[j];
//             }
//             arr[end]=temp;
//         }
//     }
// }

// int main()
// {
//     int arr[6]={2,4,7,0,8,5};
//     MergeZeroes(arr,6);
//     for(int i=0; i<6; i++)
//     {
//         cout << arr[i]<<" ";
//     }
// }


//                                      <- method 2  ->
#include<iostream>
using namespace std;

void MergeZeroes(int arr[], int size)
{

    int i=0;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]!=0)
            {
                swap(arr[i],arr[j]);
                i++;
            }
        }

}

int main()
{
    int arr[6]={0,1,0,3,12,0};
    MergeZeroes(arr,6);
    for(int i=0; i<6; i++)
    {
        cout << arr[i]<<" ";
    }
}