#include<iostream>
using namespace std;

int binary_search(int arr[], int l, int h, int key)
{
    if(l > h)
        return -1;

    int mid = (l+h)/2;
    if(arr[mid] == key)
        return mid;
    else if(key < arr[mid])
        return binary_search(arr, l, mid - 1, key);
    else
        return binary_search(arr, mid + 1, h, key);
    
    return -1;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << binary_search(arr, 0, 9, 11);
    return 0;
}