#include<iostream>
using namespace std;

int arraySum(int arr[], int n)
{
    if(n == 0)
        return 0;

    int ans = arr[0] + arraySum(arr + 1, n - 1);
    return ans;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << arraySum(arr, 10);

    return 0;
}