#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreatestElement(int arr[], int n)
{
    vector<int> result;
    stack<int> st;
    // cout << "Inside Function" << endl;
    for(int i = n - 1; i >= 0; i--)
    {
    // cout << "Inside For Loop" << endl;
        if(st.empty())
        {
            result.push_back(-1);
            st.push(arr[i]);
        }
        else
        {
            while(!st.empty())
            {
                if(arr[i] >= st.top())
                    st.pop();
                else
                    break;
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
    }
    reverse(result.begin(), result.end());
    return result;
}

void display(vector<int> arr)
{
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[7] = {1,3,0,0,1,2,4};

    vector<int> v = nextGreatestElement(arr, 7);
    display(v);

    return 0;
}