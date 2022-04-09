#include<iostream>
#include<stack>
using namespace std;

class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        // static int item = st.top();
        while(!st.empty())
        {
            cloned.push(st.top());
            st.pop();
        }
    }
};

int main()
{
    stack<int> st;
    st.push(1);    
    st.push(2);    
    st.push(3);    
    st.push(4);    
    st.push(5);

    stack<int> cloned;

    Solution sol;
    sol.clonestack(st, cloned);    

    return 0;
}