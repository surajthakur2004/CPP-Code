//    <-   method 1  ->


// #include<iostream>
// using namespace std;

// void rotate(int arr[], int size,int k)
// {
//       for (int i=0; i<k; i++)
//       {
//         int j=size-1;
//         while(j>0)
//         {
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//       }
// }

// int main()
// {
//     int arr[7]={1,2,3,4,5,6,7};
//     int k;
//     cout<<"Enter the step for rotate";
//     cin>>k;
//     rotate(arr,7,k);
//     for(int i=0; i<7; i++)
//     {
//         cout << arr[i]<<" ";
//     }
// }


//    <-   method 2  ->

#include<iostream>
using namespace std;

void rotate(int arr[],int arr1[],int size, int size1,int k)
{
      for (int i=0; i<size; i++)
      {
        arr1[(i+k)%size]=arr[i];
      }
}

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int arr1[7];
    int k;
    cout<<"Enter the step for rotate : ";
    cin>>k;
    rotate(arr,arr1,7,7,k);
    cout <<"Rotated Array:- ";
    for(int i=0; i<7; i++)
    {
        cout<< arr1[i]<<" ";
    }
}
