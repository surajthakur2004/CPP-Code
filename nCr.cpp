#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for (int i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    return fact;
}

int nCr(int p,int q)
{
    int combination = factorial(p)/(factorial(p-q) * factorial(q));

}

int main()
{
    int n,r;
    cin>>n>>r;
    int ans = nCr(n,r);
    cout << ans ;
}