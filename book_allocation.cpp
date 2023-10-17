#include<iostream>
using namespace std;
int pages(int arr[],int size)
{
    int sum=0;
    for(int i=0; i<=size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

bool isPossible(int arr[],int size, int student,int mid)
{
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<size;i++)
    {
        if(pagesum+arr[i]<=mid)
        {
            pagesum+=arr[i];
        }
        else
        {
            studentcount++;
            if(studentcount>student || arr[i]>mid)
            {
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}

int book_allocation(int arr[], int size, int student,int totalpage)
{
    int start=0;
    int end=totalpage;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(isPossible(arr,size,student,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[4]={10,20,30,40};
    int student;
    cout<<"ENTER THE NUMBER OF STUDENT : ";
    cin>>student;
    int totalpage=pages(arr,4);
    int ans=book_allocation(arr,4,student,totalpage);
    (ans==-1)
    ?cout<<"ERROR"
    :cout<<ans;
}