//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    int maxsum(int arr[],int ind,vector <int> &dp){
        if (ind==0) return arr[0];
            if(ind<0)  return 0;
            if(dp[ind]!=-1) return dp[ind];
        int pick = arr[ind] + maxsum(arr,ind-2,dp);
        int notpick = 0 + maxsum(arr,ind-1,dp);
        
        return dp[ind]=max(pick,notpick);
        
    }
    int FindMaxSum(int arr[], int n)
    { vector <int> dp(n,-1);
      return maxsum(arr,n-1,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends