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

/*BRUTE FORCE USING STL

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
*/

/*--------------------------------------OPTIMAL APPROACH-----------------------------------------------------------------*/

/*OPTIMAL APPROACH
Create a variable called max and initialize it with the value of the first element in the array.
Use a for loop to iterate through the rest of the elements in the array.
In each iteration, compare the current element with the max variable.
If the current element is greater than the max value, update the max value with the current element's value.
After completing the loop, print the max variable, which will hold the largest value in the array.
Complexity: Time complexity: O(n) and Space complexity: O(1)
Pattern: Linear traversal*/

/*
#include <iostream>
#include <climits>
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

    int largest = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
    }

    cout<<"Largest element is: "<<largest;
}
*/

/*OPTIMAL APPROACH USING STL*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int largestnumber (vector<int>& nums)
{
    int largest = INT_MIN;

    for(int i=0; i<nums.size(); i++)
    {
        if (nums[i]>largest)
        {
            largest = nums[i];
        }
    }

    return largest;
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

    int result = largestnumber(nums);

    cout<<"Largest number is: "<<result;
}
