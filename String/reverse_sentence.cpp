// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string main = "";
        string submain = "";
        int n = S.length();
        for(int i = 0; i < n; i++)
        {
            submain = submain + S[i];
            if(S[i] == '.')
            {
                main = submain + main;
                cout << submain << endl;
                submain = "";
            }
        }
        return main;
    } 
};

// { Driver Code Starts.
int main() 
{
    // int t;
    // cin >> t;
    // while (t--) 
    // {
    //     string s;
    //     cin >> s;
    //     Solution obj;
    //     cout<<obj.reverseWords(s)<<endl;
    // }
    string s = "hello";
    s[2] = 'k';
    cout << s;
}  // } Driver Code Ends