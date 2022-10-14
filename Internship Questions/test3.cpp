#include<iostream>
#include<utility>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int max = INT32_MIN;
    int min = INT32_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    pair<int, int> max_pair;
    pair<int, int> min_pair;
    max_pair.first = max;
    min_pair.first = min;
    max_pair.second = 0;
    min_pair.second = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == max)
        {
            max_pair.second++;
        }
        if(arr[i] == min)
        {
            min_pair.second++;
        }
    }
    max = max_pair.first*max_pair.second;
    min = min_pair.first*min_pair.second;
    float avg = (float)(max+min)/(float)(max_pair.second + min_pair.second);

    cout << avg << endl;

    return 0;
}