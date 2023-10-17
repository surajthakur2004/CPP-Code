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
int main()
{
    int arr[10]={7,8,9,0,1,2,3,4,5,6};
    int start=0;
    int size=10;
    int end=size-1;
    int ans=pivotElement(arr,start,end);
    cout<<"PIVOT ELEMENT IS (" <<arr[ans]<< ") AT INDEX (" << ans <<") "<<endl;
}