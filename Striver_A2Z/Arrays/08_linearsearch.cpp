#include <iostream>
#include <vector>
using namespace std;

int linearSearch (vector<int>& nums,  int target)
{
    for(int i = 0; i<nums.size(); i++)
    {
        if(nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter the elements: ";
    for(int i=0; i<nums.size(); i++)
    {
        cin>>nums[i];
    }

    int target;
    cout<<"Enter the value to be found: ";
    cin>>target;

    int result = linearSearch(nums, target);

    cout<<result;
}
