#include<iostream>
#include<vector>
using namespace std;

int total_occurance(vector<int> arr, int n, int key)
{
    int l = 0, h = n-1;
    int mid = (l+h)/2;
    int first = -1;
    int last = -1;
    while(l <= h)
    {
        if(key == arr[mid])
        {
            first = mid;
            h = mid - 1;
        }
        else if(key < arr[mid])
            h = mid - 1;
        else if(key > arr[mid])
            l = mid + 1;
        
        mid = (l+h)/2;
    }
    l = 0; h = n-1;
    mid = (l+h)/2;
    while(l <= h)
    {
        if(key == arr[mid])
        {
            last = mid;
            l = mid + 1;
        }
        else if(key < arr[mid])
            h = mid - 1;
        else if(key > arr[mid])
            l = mid + 1;
        
        mid = (l+h)/2;
    }

    if(first == -1 || last == -1)
        return 0;

    return last - first + 1;
}

int main()
{
    vector<int> arr = {1,1,2,2,2,2,5,6,6,6};
    cout << total_occurance(arr, 10, 10);
    return 0;
}