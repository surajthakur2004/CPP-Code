#include <iostream>
using namespace std;
int main()
{
    int m= 1375;
    int x=1;
     int hundred = m/100;
    int p = (m- (hundred*100)) ;
                int fifty = p/50 ;
     int q = (p-(fifty *50));
                int twenty = q/20 ;
    int one = (q-(twenty*20));
    switch (x)
    {
        case 1:
                cout << " Notes of 100 rupess :"<< hundred<<endl;


        case 2:
                cout << " Notes of 50 rupees :"<< fifty << endl; 


        case 3:
                cout << " Notes of 20 rupees :"<< twenty << endl;

        case 4: 
                 cout << " Notes of 1 rupees :"<< one << endl;

        default : cout << " error";
            }
}