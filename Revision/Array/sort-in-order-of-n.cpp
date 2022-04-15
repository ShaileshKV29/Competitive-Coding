#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,23,4,5,67,87,89,90,9,0,8,65};
    int max = INT32_MIN;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    cout << max << endl;
    int hmap[max + 1] = {0};
    for(int i = 0; i < size; i++)
    {
        hmap[arr[i]]++;
    }

    for(int i = 0, j = 0; i < max + 1; i++)
    {
        // cout << hmap[i] << " ";
        if(hmap[i] > 0)
        {
            arr[j++] = i;
        }
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        // if(hmap[i] > 0)
        // {
        //     arr[j] = i;
        // }
    }

    return 0;
}