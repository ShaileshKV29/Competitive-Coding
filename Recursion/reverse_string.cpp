#include<iostream>
#include<string>
using namespace std;

string reverse_string(string s)
{
    if(!s.empty())
    {
        return reverse_string(s.substr(1)) + s[0];
    }

    return "";
}

int main()
{
    cout << reverse_string("Shailesh");

    return 0;
}