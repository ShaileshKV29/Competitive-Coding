#include<iostream>
using namespace std;

int main()
{
    string s = "sudhanshu";
    int hmap[26] = {0};

    for(int i = 0; i < s.size(); i++)
    {
        hmap[s[i] - 97]++;
    }

    for(int i = 0; i < 26; i++)
    {
        // cout << hmap[i] << " ";
        if(hmap[i] > 1)
            cout << (char)(97+i) << " ";
    }

    return 0;
}