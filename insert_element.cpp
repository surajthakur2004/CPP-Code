#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int size, int num, int place)
{
   for(int i=size-1;i>=place;i--)
   {
      swap(arr[i],arr[i-1]);
   }
}
int main()
{
   int size,place,num;
   cout<<"size of array:- ";
   cin>>size;
   int arr[size];
   cout<<"elements of array :- "<<endl;
   for(int i=0; i<size-1; i++)
   {
      cin>>arr[i];
   }
   cout<<"enter the element you insert :- ";
   cin>>num;
   cout<<"enter where you insert :- ";
   cin>>place;
   arr[size-1]=num;
   insert(arr, size, num, place);

    for(int i=0; i<size; i++)
   {
      cout<<arr[i]<<" ";
   }
}