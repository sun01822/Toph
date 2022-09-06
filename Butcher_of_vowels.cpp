#include<bits/stdc++.h>
using namespace std;

bool myfunc(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    bool flag = true;
    string s;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(myfunc(s))
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}