//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            int hmapA[26] = {0};
            int hmapB[26] = {0};
            string result;
            
            for(int i = 0; i < A.size(); i++)
            {
                hmapA[A[i] - 97]++;
            }
            for(int i = 0; i < B.size(); i++)
            {
                hmapB[B[i] - 97]++;
            }
            
            for(int i = 0; i < 26; i++)
            {
                if(hmapA[i] != hmapB[i])
                {
                    if(hmapA[i] > 0 && hmapB[i] > 0)
                        continue;
                    else
                    {
                        if(hmapA[i] > 0)
                            result += hmapA[i];
                        else
                            result += hmapB[i];
                    }
                }
            }
            
            if(result != "")
                return result;
            
            return "-1";
            
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends