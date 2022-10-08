#include<iostream>
using namespace std;

int main()
{
    int arr[11] = {0};
    for(int i = 1; i <= 5; i++)
    {
        int k = i;
        for(int j = i; j < 11; j += i)
        {
            if(arr[j] == 1)
                arr[j] = 0;
            else
                arr[j] = 1;
        }
    }

    int count_open = 0;
    int count_closed = 0;

    

    
    for(int i = 1; i < 11; i++)
    {
        if(arr[i] == 1)
            count_open++;
        else if(arr[i] == 0)
            count_closed++;
        // cout << arr[i] << " ";
    }
    // cout << endl;
    cout << count_open << endl;
    cout << count_closed << endl;

    return 0;
}