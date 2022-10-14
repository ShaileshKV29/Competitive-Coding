#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n] = {0};
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    int avg = sum/n;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == avg)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}