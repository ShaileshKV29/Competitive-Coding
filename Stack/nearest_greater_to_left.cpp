#include<bits/stdc++.h>
using namespace std;

vector<int> nearestGreaterToLeft(int arr[], int n)
{
    vector<int> result;
    stack<int> st;

    for(int i = 0; i < n; i++)
    {
        while(!st.empty())
        {
            if(st.top() > arr[i])
                break;
            else
                st.pop();
        }
        if(st.empty())
        {
            result.push_back(-1);
            st.push(arr[i]);
        }
        else
        {
            result.push_back(st.top());
            st.push(arr[i]);
        }
        
    }
    return result;
}

int main()
{
    int arr[7] = {1,3,0,0,1,2,4};
    vector<int> v = nearestGreaterToLeft(arr, 7);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}