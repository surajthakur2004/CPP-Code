#include <iostream>
using namespace std;

int linearsearch(int array[],int size,int search)
{
    for( int i=0; i<size ;i++)
    {
        
        if(search==array[i])
        return i;
        
    }
    return 0;
}
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int search;
    cout<<"Enter the element for search"<<endl;
    cin>> search;
    int ans =linearsearch(array,10,search);
    if(ans==0)
     cout << "Element not present in array"<<endl;
     else
     cout << "Element found at index : "<< ans<<endl;
}