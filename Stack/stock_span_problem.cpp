#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(int arr[], int n)
{
    vector<int> r;
    stack<int> st;
    int pop_count = 0;
    for(int i = 0; i < n; i++)
    {
        while(!st.empty())
        {
            if(arr[st.top()] > arr[i])
                break;
            else
                st.pop();
        }
        if(st.empty())
        {
            r.push_back(i + 1);
            st.push(i);
        }
        else
        {
            r.push_back(i - st.top());
            st.push(i);
        }
    }

    return r;
}

int main()
{
    int arr[7] = {100,80,60,70,60,75,85};
    vector<int> v = stockSpan(arr, 7);
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;   
    
    return 0;
}