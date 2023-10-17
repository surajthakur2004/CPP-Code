#include<iostream>
using namespace std;

int binarysearch(int arr[],int start,int end,int element)
{
    if(start>end) 
     return -1;
     else
    {
    int mid=(start+end)/2;
    if(arr[mid]==element)
    return mid;
    else if (arr[mid]>element)
    {
        binarysearch(arr,start,mid-1,element);
    }
    else 
    {
        binarysearch(arr,mid+1,end,element);
    }
    
    }
    
    
}

int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int element;
    cout<<"Enter the element you found in array : ";
    cin>>element;
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int end=size-1;
    int ans=binarysearch(arr,start, end,element);
    (ans==-1)
    ?cout<<"element not found"
    :cout <<"element fount at index :"<<ans<<endl;
}