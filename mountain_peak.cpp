#include<iostream>
using namespace std;
int mountainPeak(int arr[],int start , int end){
    int mid =(start+end)/2;

    while(start<end){
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        return arr[mid];

        else if(arr[mid]>arr[mid+1])
        end=mid-1;

        else 
        start=mid+1; 

        mid=(end+start)/2;
    }

}
int main(){
    int arr[7]={1,7,6,4,3,2,1};
    int size,start,end;
    size =7;
    start=0;
    end=size-1;
    int ans=mountainPeak(arr,start,end);
    cout<<"Peak value is : "<<ans<<endl;
}