#include<iostream>
using namespace std;
char upperToLower(char ch1)
{
    if(ch1>='A' && ch1<='Z')
    {
        ch1=ch1-'A'+'a';
    }
    return ch1;
}
char LowerToUpper(char ch2)
{
    if(ch2>='a' && ch2<='z')
    {
        ch2=ch2-'a'+'A';
    }
    return ch2;
}
int main()
{
    char ch1='D';
    char ch2='e';
    char ans1=upperToLower(ch1);
    cout<<ans1<<endl;
    char ans2=LowerToUpper(ch2);
    cout<<ans2<<endl;
}