/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bool sorted = true;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                sorted = false;
            }
        }
    }
    if(sorted == true)
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array  is not sorted";
    }
}
*/

#include <iostream>
#include <vector>
using namespace std;

bool isArraySorted (vector<int>& nums)
{
    bool sorted = true;
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]>nums[j])
            {
                sorted = false;
            }
        }
    }
    return sorted;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }

    bool result = isArraySorted(nums);

    cout<<boolalpha<<result;
}