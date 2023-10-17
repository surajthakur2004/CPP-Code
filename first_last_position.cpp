#include <iostream>
using namespace std;
int firstposition(int arr[],int start,int end,int element)
{
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==element)
        {
           ans=mid;
           end=mid-1; 
        }
        else if(arr[mid]>element)
        end=mid-1; 
        else
        start=mid+1;
        mid=(start +end)/2;
    }
    return ans;
}
int lastposition(int arr[],int start,int end,int element)
{
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==element)
        {
           ans=mid;
           start=mid+1;
        }
        else if(arr[mid]>element)
        end=mid-1; 
        else
        start=mid+1;
        mid=(start +end)/2;
    }
    return ans;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,6,6,6,7};
    int start=0;
    int size=10;
    int end = size-1;
    int element;
    cout<<"Enter the element : ";
    cin>>element;
    int ans1 = firstposition(arr,start,end,element);
    (ans1==-1)
    ?cout<<"element not found"<<endl
    :cout <<"First position of element fount at index : "<<ans1<<endl;
    int ans2 = lastposition(arr,start,end,element);
    (ans2==-1)
    ?cout<<"element not found"<<endl
    :cout <<"Last position of element fount at index : "<<ans2<<endl;
}