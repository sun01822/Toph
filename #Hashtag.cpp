// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);cout.tie(NULL);
//     string s;
//     getline(cin>>ws, s);
//     s.erase(remove(s.begin(), s.end(), ' '), s.end());
//     cout << s << '\n';
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!= ' ')
            cout << s[i];
    }
    return 0;
}
