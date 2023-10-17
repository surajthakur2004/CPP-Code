#include<iostream>
using namespace std;


int length_of_string(char name[])
{
    int count=0;
    int i=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}

bool panildrome(char name[],int len)
{
    int start=0;
    int end=len-1;
    while(end>start)
    {
        if(name[start++]!=name[end--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char name[20];
    cout<<"enter your name:- ";
    cin>>name;
   int len= length_of_string(name);
   cout<<len<<endl;
   bool ans=panildrome(name,len);
   (ans==false)
   ?cout<<"oops! sorry"
   :cout<<"yes its panildrome";
}