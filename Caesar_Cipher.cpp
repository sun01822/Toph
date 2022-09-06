#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    getchar();
    getline(cin, s);

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            cout << " ";
        }

        else if(s[i] - n < 97)
        {
            s[i] += 26;
            char q = s[i] - n;
            cout << q;
        }

        else
        {
            char c = s[i] - n;
            cout << c;
        }
    }


    return 0;
}
