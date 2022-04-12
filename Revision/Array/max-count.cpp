#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,12,34,4234,1,12,33,34};
    int max = INT32_MIN;
    int count = 0;
    int item;
    for(int i = 0; i < 8; i++)
    {
        for(int j = i+1; j < 8; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        
        if(count > max)
        {
            max = count;
            item = arr[i];
        }
        count = 0;
    }

    cout << item << endl;
    cout << max << endl;

    return 0;
}