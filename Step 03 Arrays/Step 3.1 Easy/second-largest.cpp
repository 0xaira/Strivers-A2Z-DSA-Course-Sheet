//Second Largest in an Array


#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	

	int print2largest(int arr[], int n) {
	    int l=arr[0];
	    int s=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>l){
	            s=l;
	            l=arr[i];
	        }
	        else if(arr[i]<l && arr[i]>s){
	            s=arr[i];
	        }
	    }
	    return s;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
