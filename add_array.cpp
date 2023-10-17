#include<iostream>
#include<vector>
using namespace std;

int add_array(int arr1[],int arr2[],int arr3[],int size1 ,int size2, int size3)
{
    int num=0,carry=0;
    int i=size1-1 , j=size2-1;
    while(i>=0 && j>=0)
    {
         if(i>=j)
         {
            int add=arr1[i]+arr2[j]+carry;
            num=add%10;
            carry=add/10;
            arr3[i]=num;
            i--;
            j--;
         }
         else{
            int add=arr1[i]+arr2[j]+carry;
            num=add%10;
            carry=add/10; 
            arr3[j]=num;
            i--;
            j--;
         }

    }
    while(i>=0)
    {
        int add=arr1[i]+carry;
        num=add%10;
        carry=add/10;
        arr3[i]=num;
        i--;
    }
    while(j>=0)
    {
        int add=arr1[j]+carry;
        num=add%10;
        carry=add/10;
        arr3[j]=num;
        j--;
    }
    while(carry!=0)
    {
        int add=carry;
        num=add%10;
        arr3[i]=num;
    }
}

int main()
{
    int arr1[2]={2,6};
    int arr2[4]={1,9,3,4};
    int arr3[4];

    add_array(arr1, arr2 ,arr3 ,2,4,4);

    for(int i=0; i<4;i++)
    {
        cout<<arr3[i]<<" ";
    }
}