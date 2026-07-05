/*
Question: Largest Element in an Array
Approach: Brute Force (Sorting)
Time Complexity: O(n log n)
Space Complexity: O(1)
Sort the array in ascending order.
Print the element at the (size of the array - 1)th index, which corresponds to the largest element in the array.
*/

/*BRUTE FORCE*/

/*
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
*/

/*BRUTE FORCE USING STL*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestelement (vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size()-1];
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }

    int result = largestelement(nums);

    cout<<"The largest element is: "<<result;
}