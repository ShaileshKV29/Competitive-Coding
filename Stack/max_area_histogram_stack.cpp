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

int maxAreaHist(int arr[], int n)
{

}

int main()
{
    int arr[7] = {100, 80, 60, 70, 60, 75, 85};
    vector<int> v = nearestSmallerLeft(arr, 7);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;   

    return 0;
}