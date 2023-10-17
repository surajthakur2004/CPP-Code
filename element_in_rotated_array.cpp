#include<iostream>
using namespace std;
int pivotElement(int arr[],int start,int end)
{
    int mid = start+((end-start)/2);
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        start=mid+1;
        else
       end=mid;

        mid = start+((end-start)/2);
    }
    return start;
}
int binarysearch(int arr[],int start,int end,int k)
{
    int  mid = start+((end-start)/2);
   while (start<=end)
   {
    if(arr[mid]==k)
    return mid;

    else if(arr[mid]>k)
    end=mid-1;

    else
    start=mid+1;

     mid = start+((end-start)/2);
   }
   return -1;
   
}
int main()
{
    int arr[10]={7,8,9,0,1,2,3,4,5,6};
    int start=0;
    int size=10;
    int end=size-1;
    int k;
    cout<<"ENTER THE ELEMENT YOU FIND ";
    cin>>k;
    int pivot=pivotElement(arr,start,end);

    if(k>=arr[pivot] && k<=arr[end])
    {
        int ans1=binarysearch(arr,pivot,end,k );
        cout<<"ELEMENT PRESENT AT INDEX "<<ans1 <<endl;
    }
    else
    {
        int ans=binarysearch(arr,start,pivot-1,k);
         cout<<"ELEMENT PRESENT AT INDEX "<< ans <<endl;
        
    }
}