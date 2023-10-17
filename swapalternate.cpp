#include <iostream>
using namespace std;

void swapalternate(int arr[],int size)
{
    int start =0;
    int end= 1;
    while (end<size)
    {
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    swapalternate(arr,6);
    for(int i=0; i<6; i++)
    cout<<arr[i] <<" ";
    cout<<endl;
}