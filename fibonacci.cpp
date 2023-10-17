#include <iostream>
using namespace std;
int fibonacci(int n)
{   int a=0;
    int b=1;
    int c=0;
        for(int i=3; i<=n; i++)
        {
        c=a+b;
        a=b;
        b=c;
        }
        return c;
}
int main()
{
    int n;
    cout << " Enter the term :";
    cin>> n;
     if (n==1)
    cout << "0";
    else if ( n==2)
    cout << "1";
    else
    {
    int ans = fibonacci( n);
    cout << ans ;
    }
}