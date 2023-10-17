#include<bits/stdc++.h>
using namespace std;

int min_bulbs(int arr[],int size, int street,int bulbs,int range)
{
    int count=0;
    // bool bulbFound=false;
    int bulbFoundAT=0;
    int path=0;

    // int i=0;
    // while(i<size)
    // {
    //     int j=i+range+1;
    //     while(j>=i-size)
    //     {
    //         if(arr[j]<=street)
    //         {
    //             bulbFound=true;
    //             bulbFoundAT=j;
    //             count++;
    //             i=bulbFoundAT+range;
    //             break;
    //         }
    //         j--;
    //     }
    //     if(!bulbFound)
    //     {
    //         return -1;
    //     }
    // }
    // return count;

    int i=0;
    while( i<=street)
    {

        path=i+range+1;
        
        for(int j=path; j>=path-range;j--)
        {
            for(int k=0; k<size; k++)
            {
                if(arr[k]==path)
                {
                    // bulbFoundAT=path;
                    count++;
                    i=path;
                    break;
                }
            }
          
            break;    
           
       }
       if(count==0)
        {
            return -1;
        }
   }
   return count;
}

int main()
{
    int arr[4]={2,4,6,8};
    int street=10;
    int bulbs=4;
    int range=3;
    int ans=min_bulbs(arr,4,street,bulbs,range);
    cout<<ans;
}