#include<bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerLeft(int arr[], int n)
{
    vector<int> r;
    stack<int> st;
    for(int i = 0; i < n; i++)
    {
        while(!st.empty())
        {
            if(arr[st.top()] < arr[i])
                break;
            else
                st.pop();
        }
        if(st.empty())
        {
            r.push_back(-1);
            st.push(i);
        }
        else
        {
            r.push_back(st.top());
            st.push(i);
        }
    }
    return r;
}

vector<int> nearestSmallerRight(int arr[], int n)
{
    vector<int> r;
    stack<int> st;
    for(int i = n-1; i >= 0; i--)
    {
        while(!st.empty())
        {
            if(arr[st.top()] < arr[i])
                break;
            else
                st.pop();
        }
        if(st.empty())
        {
            r.push_back(-1);
            st.push(i);
        }
        else
        {
            r.push_back(st.top());
            st.push(i);
        }
    }
    reverse(r.begin(), r.end());
    return r;
}

int maxAreaHist(int arr[], int n)
{
    vector<int> r;
    vector<int> nsl = nearestSmallerLeft(arr, n);
    vector<int> nsr = nearestSmallerRight(arr, n);
    int max = -1;
    for(int i = 0; i < n; i++)
    {
        int area = (nsr[i] - nsl[i] - 1)*arr[i];
        if(area > max)
            max = area; 
    }
    return max;
}

int main()
{
    int arr[7] = {6,2,5,4,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // vector<int> v = nearestSmallerRight(arr, 7);

    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;
    int result = maxAreaHist(arr, n);
    cout << result << endl;   

    return 0;
}