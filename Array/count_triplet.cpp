// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    sort(arr, arr + n);
	    // Your code goes here
	    int triplet_count = 0;
	    int i,j;
	    for(int k = n - 1; k >= 0; k--)
	    {
	        i = 0;
	        j = k - 1;
	        while(i < j)
	        {
	            if(arr[i] + arr[j] == arr[k])
                {
	                triplet_count++;
                    break;
                }
	            else if(arr[i] + arr[j] > arr[k])
	                j--;
	            else if(arr[i] + arr[j] < arr[k])
	                i++;
	        }
	    }
	    return triplet_count;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends