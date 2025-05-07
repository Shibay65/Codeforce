#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0, a = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
            c++;
        else
            a++;
    }
    if (c >= a)
        for (int i = 0; i < s.size(); i++)
        {
            cout <<(char) tolower(s[i]);
        }
    else
    {
        for (int i = 0; i < s.size(); i++)
            cout <<(char) toupper(s[i]);
    }

    return 0;
}
