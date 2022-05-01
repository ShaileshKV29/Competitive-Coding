// Brute Force Method
#include<iostream>
using namespace std;

int main()
{
    int arr[8] = {0,0,1,1,2,2,2,2};
    int key;
    cout << "Enter Key: ";
    cin >> key;
    int j = sizeof(arr)/sizeof(arr[0]) - 1;
    int first_occur = -1;
    int last_occur = -1;
    for(int i = 0; i < j+1; i++)
    {
        if(arr[i] == key)
        {
            first_occur = i;
            break;
        }
    }
    for(j; j >= 0; j--)
    {
        if(arr[j] == key)
        {
            last_occur = j;
            break;
        }
    }

    cout << first_occur << " " << last_occur << endl;

    return 0;
}