#include<iostream>
using namespace std;

int check( int arr[], int size)
{
    int count=0;
    for(int i=1; i<size; i++)
    {
        if(arr[i-1]>arr[i])
        {
            count++;
        }
    }
    if(arr[size-1]>arr[0])
    {
        count++;
    }
    return count;
}

int main()
{
    int  arr[7]={2,9,4,3,5,1,6};
    int ans=check(arr, 7);
    (ans<=1)
    ?cout<<"true"
    :cout<<"false";

}