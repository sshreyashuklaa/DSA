/*
Question: Second Largest Element in an Array

Pattern:
-> Sorting
-> Reverse Traversal

Brute Approach:
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

/* ye optimal khudse likha par ye sahi nahi hai isme ham 2 baar loop chala rahe hai ek hi pass mai krenge tab hoga optimal
this is a more better approach but not optimal

Better Approach

Pattern: 
Linear traversal (two pass)

Approach:
1. Traverse the array once to find the largest element.
2. Traverse the array again to find the largest element that is smaller than the largest.
3. If no such element exists, return -1.

Complexity:
Time complexity: O(n)
Space complexity: O(1)

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>smax && arr[i]!=max)
        {
            smax = arr[i];
        }
    }
    if(smax == INT_MIN)
    {
        cout<<"-1";
    }
    else{
        cout<<"Second largest element is: "<<smax;
    }
}*/


/* Optimal approach*/
/* Pattern: Linear traversal (Single pass)

Approach:
1. Initialize largest and secondLargest with INT_MIN.
2. Traverse the array only once.
3. If the current element is greater than largest:
      secondLargest = largest
      largest = current element
4. Otherwise, if the current element is smaller than largest but greater than secondLargest:
      secondLargest = current element
5. If secondLargest is not updated, return -1.

Complexity:
Time complexity: O(n)
Space complexity: O(1)
*/
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int largest = INT_MIN;
    int slargest = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest = arr[i];
        }
    }
    if(slargest == INT_MIN)
    {
        cout<<"-1";
    }
    else
    {
        cout<<"Second largest element is: "<<slargest;
    }
}