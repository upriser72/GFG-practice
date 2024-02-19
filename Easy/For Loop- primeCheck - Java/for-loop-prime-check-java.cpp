//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string isPrime(int n) {
        int flag=0;
        if(n==0 || n==1)
            return "No";
        // code here
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                flag+=1;
        }
        if(flag==0)
            return "Yes";
        else
            return "No";
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        string res = obj.isPrime(n);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends