//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long gcd(long long a , long long b)
    {
        if(a == 0)
            return b;
        return gcd(b%a, a);
    }
    
    
    vector<long long> lcmAndGcd(long long A , long long B) {
    vector<long long> vec(2);
    
	vec[1]=gcd(A,B);
	
	vec[0]=(A*B)/vec[1];
	return vec;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends