#include<iostream>
using namespace std;

int Find_num(int arr[],int size,int k)
{
    int i=0;
    int max_num=0;
    while(i<k)
    {
        max_num=arr[i];
        int temp=0;
        for(int j=0; j<size; j++)
        {
            if(arr[j]>max_num)
            {
                max_num=arr[j];
                temp=j;
            }
 
        }
        arr[temp]=INT16_MIN;
        i++;
    }
    return max_num;
}

int main()
{
    int arr[5]={2,5,4,4,5};
    int k;
    cout<<"Enter the rank :- ";
    cin>>k;
    int ans=Find_num(arr, 5, k);
    cout<<"Marks is :- "<<ans;
}