//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
    int x=N;
	int d;
	int count=0;
	while(N>0)
	{
		d=N%10;
		N/=10;
		if(d==0)
		{
			continue;
		}
		else if(x%d==0)
		{
			count++;
		}
	}
	return count;
        //code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends