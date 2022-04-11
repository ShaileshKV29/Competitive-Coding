#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,12,34,4234,1,12,33,34};
    int max = INT32_MIN;
    int count = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = i+1; j < 8; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        
        if(count > max)
            max = count;
    }

    cout << max;

    return 0;
}