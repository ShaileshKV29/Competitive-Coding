// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_sum = 0;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            if(sum > max_sum)
                max_sum = sum;
            for(int j = i+1; j < n; j++)
            {
                sum += arr[j];
                if(sum > max_sum)
                    max_sum = sum;
            }
            sum = 0;
        }
        
        if(max_sum > 0)
            return max_sum;
            
        return -1;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends