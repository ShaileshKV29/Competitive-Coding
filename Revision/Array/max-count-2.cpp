#include<iostream>
using namespace std;

int main()
{
    int arr[] = {11,2,23,3,3,4,5,6,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = 0;

    for(auto x: arr)
    {
        if(x > max)
            max = x;
    }

    int hmap[max] = {0};
    for(int i = 0; i < size; i++)
    {
        hmap[arr[i]]++;
    }

    int count = 0, max_element;
    for(int i = 0; i < max; i++)
    {
        if(hmap[i] > count)
        {
            count = hmap[i];
            max_element = i;
        }
    }

    cout << "Element: " << max_element << " count: " << count;

    return 0;
}