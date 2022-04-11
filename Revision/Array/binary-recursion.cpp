#include<iostream>
using namespace std;

int binary_recursion(int arr[], int l, int h, int key)
{
    if(l < h)
    {
        int mid = (l+h)/2;
        if(key == arr[mid])
            return mid;
        else if(key > arr[mid])
            binary_recursion(arr, mid+1, h, key);
        else if(key < arr[mid])
            binary_recursion(arr, l, mid - 1, key);
    }else
    {
        return -1;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    cout << binary_recursion(arr, 0, 8, 7);   

    return 0;
}