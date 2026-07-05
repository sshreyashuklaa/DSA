/*
Question: Largest Element in an Array
Approach: Brute Force (Sorting)
Time Complexity: O(n log n)
Space Complexity: O(1)
Sort the array in ascending order.
Print the element at the (size of the array - 1)th index, which corresponds to the largest element in the array.
*/

/*BRUTE FORCE*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    cout<<"Largest element is: "<<arr[n-1];
}