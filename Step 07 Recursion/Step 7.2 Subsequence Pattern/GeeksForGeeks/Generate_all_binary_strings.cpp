//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void solve(string op, int n)
    {
        if (n == 0)
        {
            cout << op << " ";
            return;
        }
        string op1 = op;
        op1.push_back('0');
        solve(op1, n - 1);
        string op2 = op;
        if (op2.back() != '1')
        {
            op2.push_back('1');
            solve(op2, n - 1);
        }
        return;
    }

    void generateBinaryStrings(int &num)
    {
        string op = "";
        solve(op, num);
        return;
    }
};

//{ Driver Code Starts.
int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        // Input
        int n;
        cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends