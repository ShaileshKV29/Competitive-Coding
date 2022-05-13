#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin >> key;
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(arr[i] != arr[j])
            {
                if(arr[i] + arr[j] == key)
                    cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}