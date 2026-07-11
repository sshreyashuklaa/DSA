//BRUTE FORCE



/*
#include <iostream>
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

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    k=k%n;

    int temp[k];
    for(int i=0; i<k; i++)
    {
        temp[i]=arr[i];
    }

    for(int i=k;i<n;i++)
    {
        arr[i-k]=arr[i];
    }

    for(int i=n-k;i<n;i++)
    {
        arr[i]=temp[i-(n-k)];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;

void rotateArray (vector<int>& nums, int k)
{
    int n = nums.size();
    k=k%n;

    int temp[k];
    for(int i=0; i<k; i++)
    {
        temp[i]=nums[i];
    }

    for(int i=k;i<n;i++)
    {
        nums[i-k]=nums[i];
    }

    for(int i=n-k;i<n;i++)
    {
        nums[i]=temp[i-(n-k)];
    }

    for(int i=0; i<n; i++)
    {
        cout<<nums[i];
    }
}

int main()
{
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;

    vector<int> nums(m);

    cout<<"Enter the elements: ";
    for(int i=0; i<m; i++)
    {
        cin>>nums[i];
    }

    int k;
    cout<<"Enter k: ";
    cin>>k;

    rotateArray(nums,k);
} */

//OPTIMAL APPROACH

/*
include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter k:";
    cin>>k; 
    k=k%n;

    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
} */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray (vector<int>& nums, int k)
{
    int n = nums.size();
     k=k%n;

    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    reverse(nums.begin(), nums.end());

    for(int i=0; i<n; i++)
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

    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }

    int k;
    cout<<"Enter k: ";
    cin>>k;

    rotateArray(nums,k);
}