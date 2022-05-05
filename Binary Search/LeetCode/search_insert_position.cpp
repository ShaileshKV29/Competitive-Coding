#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& arr, int target)
{
    int l = 0;
    int h = arr.size() - 1;
    int mid;
    while(l <= h)
    {
        mid = (l+h)/2;

        if(arr[mid] == target)
            return mid;
        else if(target < arr[mid])
            h = mid - 1;
        else if(target > arr[mid])
            l = mid + 1;
    }
    
    if(target < arr[mid])
        return mid;
    return mid + 1;
}


int main()
{
    vector<int> arr = {1,3,5,6,8};
    cout << searchInsert(arr, 4);   

    return 0;
}