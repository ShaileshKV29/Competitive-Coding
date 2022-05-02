#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int l = 0;
    int h = n-1;
    int mid;
    int first = - 1;
    while(l <= h)
    {
        mid = (l+h)/2;
        if(key == arr[mid])
        {
            first = mid;
            h = mid - 1;
        }
        else if(key < arr[mid])
            h = mid - 1;
        else if(key > arr[mid])
            l = mid + 1;
    }

    return first;
}

int main()
{
    int arr[10] = {1,1,2,2,2,2,2,2,4,5}; 
    cout << binary_search(arr, 10, 4);   

    return 0;
}