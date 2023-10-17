#include<iostream>
using namespace std;


string reverse(string s,int start,int end)
{
    while(end>start)
    {
        swap(s[start++],s[end--]);
    }
    return s;
}

int main()
{
    string s="SuRaJ ThAkUr";
    int start=0;
    cout<<s.length()<<endl;
    for(int i=0;i<s.length();i++)
    {
        while(s[i]!=' ')
        {
            if(s[i]=='\0')
            break;
            i++;
        }
        int end=i-1;
        s = reverse(s,start,end);
        start=end+2;
    }
    cout<<s;
}
