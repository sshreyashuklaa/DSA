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
    for(int i =0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int temp = arr[0];
    for(int i = 0; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i];
    }
}
*/

#include <iostream>
#include <vector>
using namespace std;

void rotateArrayLeftByOne(vector<int>& nums)
{
    int temp = nums[0];
    for(int i=0; i<nums.size()-1; i++)
    {
        nums[i] = nums[i+1];
    }
    nums[nums.size()-1] = temp;

    for(int i=0; i <nums.size(); i++)
    {
        cout<<nums[i];
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter the elements: ";
    for(int i=0; i<nums.size(); i++)
    {
        cin>>nums[i];
    }

    rotateArrayLeftByOne (nums);
}

