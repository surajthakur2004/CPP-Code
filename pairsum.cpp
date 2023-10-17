#include<iostream>
using namespace std;

bool pairsum(int arr[],int size,int x)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i!=j)
            {
                int sum=arr[i]+arr[j];
                
                if(sum==x)
                {
                    cout <<arr[i] << " + " <<arr[j]<<" = "<<sum<<endl;
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int x;
    cout<<"Enter the value : ";
    cin>>x;
    int sum= pairsum(arr,6,x);
    (sum==0)
    ?cout<<"NO"
    :cout<<"YES";
}