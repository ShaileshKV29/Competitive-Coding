//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        stack<int> st;
        vector<int> result;
        for(int i = 0; i < n; i++)
        {
            while(!st.empty())
            {
                if(st.top() < a[i])
                    break;
                else
                    st.pop();
            }
            if(st.empty())
            {
                result.push_back(-1);
                st.push(a[i]);
            }
            else
            {
                result.push_back(st.top());
                st.push(a[i]);
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends