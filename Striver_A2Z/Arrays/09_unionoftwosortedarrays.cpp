#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the first array";
    cin>>n;

    int arr1[n];
    cout<<"Enter the elements for the first array: ";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr1[i];
    }

    int p;
    cout<<"Enter the size of second array";
    cin>>p;

    int arr2[p];
    cout<<"Enter the elements of the second array: ";
    for(int i = 0 ; i < p ; i++)
    {
        cin>>arr2[i];
    }

    int u[n+p];
    int k = 0;

     for(int j=0;j<n;j++)
    {
        bool found = false;

        for(int i=0;i<k;i++)
        {
            if(arr1[j]==u[i])
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            u[k]=arr1[j];
            k++;
        }
    }

for(int j = 0 ; j < p ; j++){
    bool b = false;
    for(int i = 0 ; i < k ; i++)
    {
        if(arr2[j] == u[i])
        {
            b = true;
            break;
        }
    }
    if(b == false)
    {
        u[k] = arr2[j];
        k++;
    }
}

sort(u, u+k);

    for(int i = 0 ; i < k ; i++)
    {
        cout<<u[i];
    }
}