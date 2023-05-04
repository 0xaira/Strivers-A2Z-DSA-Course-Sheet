// Find the largest element in an array

#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach: Use sorting to sort the array in descending order and return the first element of the array.
// Time Complexity: O(nlogn)+ O(1) = O(nlogn)

// Optimal Approach: Traverse the array and keep track of the maximum element.
// Time Complexity: O(n) + O(1) = O(n)

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}