#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr)
{
    int l = 0;
    int h = arr.size() - 1;
    int mid = (l+h)/2;
    while(l <= h)
    {
        if(mid > 0 && mid < arr.size() - 1)
        {
            if(arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
                return mid;
            else if(arr[mid - 1] < arr[mid])
                h = mid - 1;
            else if(arr[mid + 1] > arr[mid])
                l = mid + 1;
        }
    }
}

int main()
{
    

    return 0;
}