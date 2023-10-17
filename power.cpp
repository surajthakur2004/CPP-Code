#include <iostream>
using namespace std;
int power ();
int power()
{
    int x,y;
    cout << " Enter the number:";
    cin>>x;
    cout << "Enter the power of " << x <<":";
    cin>>y;
    int mul=1;
    for (int i=1; i<=y; i++)
    {
        mul=mul*x;
    }
    return mul;
}
int main()
{
    int ans=power ();
    cout<< ans << endl;
    int a=power ();
    cout <<a<<endl;
}