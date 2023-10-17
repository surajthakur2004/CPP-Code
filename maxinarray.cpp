#include <iostream>
using namespace std;

int max(int array[], int size)
{
    int MAX = INT32_MIN;
    for (int i=0; i<size ; i++)
    {
        if ( array[i]>MAX)
        MAX=array[i];
    }
    return MAX;
} 

int min(int array[],int size)
{
    int MIN= INT32_MAX;
    for (int i=0; i<size; i++)
    {
        if (array[i]<MIN)
        MIN= array[i];
    }
    return MIN;
}

int main ()
{
    int size;
    cout << "Enter the size of an array : ";
    cin>> size;
    cout << "Enter the " <<size <<" element in array"<< endl;
    int array[size];
    for (int i=0; i<size ; i++)
    {
        cin>> array[i];
    }
    int maximum = max(array, size);
    int minimum = min(array, size) ;
    cout << "max is : " << maximum << endl;
    cout << "min is : " << minimum << endl;     
}
