#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int T,i=1;
    string s;
    cin >> T;
    while(T--)
    {   
        multiset<char> st;
        map<int, char> mp;
        map<int, char>::iterator it;
        bool yes[130] = {0};
        cin >> s;
        cout << "Case #" << i << ":\n";
        for (int i = 0; i < s.length(); i++)
        {
            st.insert(s[i]);
            mp.insert(make_pair(i, s[i]));
        }
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if (yes[it->second] == 0)
            {
                cout << it->second << " " << st.count(it->second) << '\n';
                yes[it->second] = 1;
            }
        }
        i++;
    }
    return 0;
}