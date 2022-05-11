#include <iostream>
#include <string>
using namespace std;

string feedback(string bin)
{
    for(int i = 1; i < bin.size() - 1; i++)
    {
        if(bin[i] == '0')
        {
            if(bin[i - 1] == '1' && bin[i+1] == '1')
                return "Good";
        }
        else
        {
            if(bin[i - 1] == '0' && bin[i+1] == '0')
                return "Good";
        }
    } 
    return "Bad";
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string bin;
        cin >> bin;
        cout << feedback(bin) << endl;
    }
	return 0;
}
