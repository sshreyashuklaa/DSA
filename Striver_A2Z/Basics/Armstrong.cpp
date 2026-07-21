#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int sum = 0;
    int temp = n;
    int temp2 = n;
    int count  = 0;

    while(n>0)
    {
        count++;
        n = n/10;
    }

    while(temp > 0)
    {
        int d = temp%10;
        int power = 1;

for(int i = 0; i < count; i++)
{
    power *= d;
}

sum += power;
        temp = temp/10;
    }

    if(temp2 == sum)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not armstrong";
    }
}