#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = 0;
    int d = 1;

    while(n>0)
    {
        int rem  = n%10;
        d = d*10+rem;
        n=n/10;
    }

    cout<<d;
}