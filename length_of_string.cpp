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

int main()
{
    char name[20];
    cout<<"enter your name:- ";
    cin>>name;
   int ans= length_of_string(name);
   cout<<ans;
}