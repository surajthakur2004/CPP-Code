#include <iostream>
using namespace std;

int ap(int n)
{
    int nterm = (3*n)+7;
    return nterm;
}

int main()
{
    int n;
    cout<<" Enter the term in ap :";
    cin >> n;
    int ans = ap(n);
    cout << ans;
}