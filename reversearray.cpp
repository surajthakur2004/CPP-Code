#include<iostream>
using namespace std;
/*
int main()
{
    int array[10]={1,2,3,4,5,9,10,34,43,55};
    for(int i=9;i>=0;i-- )
    {
        cout <<array[i]<<" ";
    }
    cout<<endl;
    cout<<array[0];
}
*/
/*
int main()
{
    int arr[5]={1,2,3,4,5};
    
    int length= sizeof(arr)/sizeof(int);
    for (int i=0; i<=(length/2)-1; i++)
    {
        int y=arr[i];
       arr[i]=arr[length-1-i];
       arr[length-1-i]=y;
    }
    for(int i=0;i<5;i++)
    cout<<arr[i] <<" ";
    cout<<endl;
   cout<<arr[0];
    
}*/



//    (REVERSE OF AN ARRAY)


// void reverse(int arr[],int size)
// {
//     int start=0;
//     int end=size-1;
//     while(start<=end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }


// int main()
// { 
//     int arr[6]={1,2,3,4,5,6};
//     reverse(arr,6);
//     for(int i=0; i<=6;i++)
//     cout<< arr[i];
//     cout<<endl;
//     return 0;
// }

// reverse after certain index
void reverse(int arr[],int size,int start, int end)
{
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main()
{ 
    int arr[6]={1,2,3,4,5,6};
    int start;
    int end=5;
    cout<<"enter the index :";

    cin>>start;
    reverse(arr,6,start+1,end );
    for(int i=0; i<6;i++)
    cout<< arr[i] <<" ";
    cout<<endl;
}