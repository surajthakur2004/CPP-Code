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

void reverse(char name[],int len)
{
    int start=0;
    int end=len-1;
    while(end>start)
    {
        swap(name[start++],name[end--]);
    }
}

int main()
{
    char name[20];
    cout<<"enter your name:- ";
    cin>>name;
   int len= length_of_string(name);
   cout<<len<<endl;
   reverse(name,len);
   cout<<name;
}