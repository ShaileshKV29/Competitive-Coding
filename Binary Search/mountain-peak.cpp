#include<iostream>
#include<vector>
using namespace std;

int mountainPeak(vector<int> arr)
{
    int l = 0, h = arr.size() - 1;
    int mid = (l+h)/2;
    while(l <= h)
    {
        if(mid > 0)
        {
        if((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
            return arr[mid];
        else if(arr[mid] > arr[mid - 1])
            l = mid + 1;
        else if(arr[mid] < arr[mid - 1])
            h = mid - 1;
        }
        else
        {
            if((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
                return arr[mid];
            else if(arr[mid] < arr[mid+1])
                l = mid + 1;
            else if(arr[mid] > arr[mid + 1])
                h = mid - 1;
        }
        
        mid = (l+h)/2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {3,5,3,2,0};
    cout << mountainPeak(arr) << endl;

    return 0;
}