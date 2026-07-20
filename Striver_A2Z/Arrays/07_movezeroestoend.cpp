/*#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd (vector<int>& nums)
{
    vector<int> temp;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]!=0)
        {
            temp.push_back(nums[i]);
        }
    }

    for(int i = 0 ; i < temp.size() ; i++)
    {
        nums[i] = temp[i];
    }

    for(int i = temp.size() ; i < nums.size() ; i++)
    {
        nums[i] = 0;
    }

    for(int i = 0 ; i < nums.size() ; i++)
    {
        cout<<nums[i];
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter the elements: ";
    for(int i = 0 ; i < n; i++)
    {
        cin>>nums[i];
    }

    moveZeroesToEnd(nums);
}*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void moveZeroesToEnd (vector<int>& nums)
{
    int j,i;
    j=-1;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]==0)
        {
            j=i;
            break;
        }
    }

    if(j==-1)
    {
        for(int i=0; i<nums.size();i++)
        {
            cout<<nums[i];
        }
    }
    else{
    for(i=j+1; i<nums.size(); i++)
    {
        if(nums[i]!=0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }

    for(int i = 0; i<nums.size(); i++)
    {
        cout<<nums[i];
    }

}
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Elements: ";
    for(int i=0; i<nums.size(); i++)
    {
        cin>>nums[i];
    }
    moveZeroesToEnd(nums);

}

//IMPORTANT NOTES
/*BRUTE FORCE
Algorithm
Create an empty temporary vector temp.
Traverse the original array.
If the current element is non-zero, push it into temp.
Traverse temp and copy all its elements back to the original array starting from index 0.
Fill the remaining positions of the original array with 0.
Return the modified array.
Time Complexity
First traversal → O(n)
Copy back → O(n)
Fill zeros → O(n)

Overall:

O(n)

Space Complexity

O(n) (extra vector used)

OPTIMAL APPROACH
(Two Pointers)

Idea: Instead of using an extra array, use the original array itself.

Algorithm
Traverse the array and find the index of the first zero.
If no zero exists, the array is already correct.
Start another pointer from the element immediately after the first zero.
Traverse the remaining array.
Whenever a non-zero element is found:
Swap it with the element at the first zero index.
Move the zero pointer one step ahead.
Continue until the traversal ends.
Return the modified array.
Time Complexity
Find first zero → O(n)
Remaining traversal → O(n)

Overall:

O(n)

Space Complexity

O(1)*

CLUES FOR TWO POINTER:
1. In-place
2. Relative order should be same
3. We had to move elements
4. Two types of elements were there: Zero and non zero
5. Brute force mai ek extra array use hora tha optimal mai hamko wo use nhi krna tha

MISTAKES
Initially stored the last zero instead of the first zero.
Forgot the no zero present (j == -1) edge case.*/