#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {12,2,23,33,44,44,3,3,3,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max = INT32_MIN;
    int max_index = -1;

    for(int i = 0; i < len; i++)
    {
        int count = 0;
        for(int j = 0; j < len; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > max)
        {
            max = count;
            max_index = i;
        }
    }

    cout << "Element: " << arr[max_index] << " Count: " << max;

    return 0;
}