#include<iostream>
using namespace std;

void left_rotate(int arr[], int n, int rotate)
{
    for(int i = 0; i < rotate; i++)
    {
        int temp = arr[0];
        for(int j = 0; j < n - 1; j++)
            arr[j] = arr[j+1];
        arr[n-1] = temp;
    }
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    left_rotate(arr, size, 19);

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}