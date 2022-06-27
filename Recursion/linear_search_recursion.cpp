#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    if(n < 0)
        return -1;
    int ans = -1;   
    if(key == arr[0])
        return n;
    else
    {
        ans = linear_search(arr + 1, n - 1, key);
        if(ans == -1)
            return -1;
        return n - ans;
    }

    return n - ans;
}

int main()
{
    int arr[10] = {2,334,5,67,78,9,9,0,62,31};
    cout << linear_search(arr, 10, 78);

    return 0;
}