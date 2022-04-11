#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int h = n-1;
    int l = 0;
    int mid;
    while(l < h)
    {
        mid = (h+l)/2;
        if(arr[mid] == key)
            return mid;
        else if(key > arr[mid])
            l = mid + 1;
        else if(key < arr[mid])
            h = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,78};
    cout << binary_search(arr, 7, 2);

    return 0;
}