//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
    int dup=n;
	int x=n;
	int sum=0,cnt=0;
	while(x)
	{
		cnt++;
		x/=10;
	}
	while(n)
	{
		int dig=n%10;
		n/=10;
		sum+=pow(dig,cnt);
	}
	if(sum==dup) return "Yes";
	else return "No";
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends