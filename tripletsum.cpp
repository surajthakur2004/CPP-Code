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
                for(int k=0;k<size; k++ )
                {
                    if(i!=k && j!=k)
                    {
                        int sum=arr[i]+arr[j]+arr[k];
                        if(sum==x)
                        {
                            cout <<arr[i] << " + " <<arr[j] << " + " <<arr[k]<<" = "<<sum<<endl;
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int main()
{
    int arr[6]={3,5,7,4,9,1};
    int x;
    cout<<"Enter the value : ";
    cin>>x;
    int sum= pairsum(arr,6,x);
    (sum==0)
    ?cout<<"NO"
    :cout<<"YES";
}