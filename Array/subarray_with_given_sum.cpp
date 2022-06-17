// { Driver Code Starts
#include <bits/stdc++.h>
#include <utility>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> result;
        long long sum = 0;
        for(int i = 0; i < n - 1; i++)
        {
            // sum += arr[i];
            for(int j = i + 1; j < n; j++)
            {
                result.push_back(arr[i]);
                result.push_back(arr[j]);
            }
            // sum = 0;
        }
        // result.push_back(-1);
        return result;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i=i+2)
            cout<<"("<<res[i]<<", " << res[i+1] << ") ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends