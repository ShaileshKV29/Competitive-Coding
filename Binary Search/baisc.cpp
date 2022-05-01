#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int l = 0, h = 9;
    int mid;
    int key;
    cout << "Enter Key: ";
    cin >> key;
    while(l <= h)
    {
        mid = (h+l)/2;
        cout << mid << " ";
        if(arr[mid] == key)
        {
            cout << "Element " << arr[mid] << " Found at: " << mid << endl;
            break;
        }
        else if(key > arr[mid])
            l = mid + 1;
        else if(key < arr[mid])
            h = mid - 1;
    }

    return 0;
}