#include<iostream>
using namespace std;

int walls(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

bool isPossible(int arr[], int size,int mid,int painters)
{
    int paintercount=1;
    int wallcount=0;
    for(int i=0;i<size;i++)
    {
        if(wallcount+arr[i]<=mid)
        {
            wallcount=wallcount+arr[i];
        }
        else
        {
            paintercount++;
            if(paintercount>painters || arr[i]>mid)
            {
                return false;
            }
            wallcount=arr[i];
        }
    }
    return true;
}

int painter_partation(int arr[],int size,int painters,int totalwall)
{
    int start=0;
    int end=totalwall;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(isPossible(arr,size,mid,painters))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}

int main()
{
    int arr[4]={5,5,5,5};
    int painters=2;
    int totalwall=walls(arr,4);
    int ans=painter_partation(arr,4,painters,totalwall);
    (ans==-1)
    ?cout<<"ERROR"
    :cout<<ans;
}