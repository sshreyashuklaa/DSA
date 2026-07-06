/*
Question: Second Largest Element in an Array

Pattern:
-> Sorting
-> Reverse Traversal

Approach:
1. Sort the array.
2. Store the largest element.
3. Traverse from the end.
4. Return the first element not equal to the largest.
5. If no such element exists, return -1.

Time Complexity: O(n log n)
Space Complexity: O(1)

Learning:
-> Duplicates must be ignored.
-> First distinct element from the end is the second largest.
-> Sorting is not necessary for the optimal solution.
*/



/*
#include <iostream>
#include <algorithm>
#include <climits>
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

    sort(arr, arr+n);
    int largest = arr[n-1];
    int secondlargest = INT_MIN;

    for(int i = n-1; i>=0; i--)
    {
        if(arr[i]!=largest)
        {
                secondlargest = arr[i];
                break;
        }
    }
    if (secondlargest == INT_MIN)
    {
        cout<<"-1";
    }
    else{
 cout<<"Second largest element is "<<secondlargest;
    }
   
}
*/

/*BRUTE USING VECTOR*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int secondlargestelement (vector<int>& nums)
{
    sort(nums.begin(),nums.end());

    int largest = nums[nums.size()-1];
    int secondlargest = INT_MIN;

    for(int i = nums.size()-1; i>=0; i--)
    {
        if(nums[i]!=largest)
        {
                secondlargest = nums[i];
                break;
        }
    }
    if (secondlargest == INT_MIN)
    {
        return -1;
    }
    else{
        return secondlargest;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>nums(n);

    cout<<"Enter the elements: ";
    for(int i=0; i<nums.size(); i++)
    {
        cin>>nums[i];
    }

    int result = secondlargestelement(nums);

    cout<<"Second largest element is "<<result;

}
*/