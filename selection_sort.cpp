#include<iostream>
using namespace std;
void selectionsort(int arr[],int size)
//  {
//      for(int i=0;i<size-1;i++)
//      {
//          for(int j=i+1; j<size;j++)
//          {
//              if(arr[i]>arr[j])
//              swap(arr[j],arr[i]);
//          }
//      }
//  }
//  int main()
//  {
//      int arr[7]={5,0,4,0,9,1,2};
//      selectionsort(arr,7);
//      for(int i=0;i<7;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//      cout<<endl;
//  }
// 
{
    for(int i=0;i<size-1;i++)
    {
        int minindex=i;
        for(int j=i+1; j<size;j++)
        {
            if(arr[minindex]>arr[j])
                minindex=j;
            
        }
        swap(arr[minindex],arr[i]);
    }
}
int main()
{
    int arr[7]={5,6,4,3,9,1,2};
    selectionsort(arr,7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}