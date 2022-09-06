#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    set<char> s;
    int N, M;
    char a, b;
    cin >> N >> M;
    while(M--)
    {
        cin >> a >> b;
        for(int i=a; i<=b; i++)
        {
            char c = (char)i;
            s.insert(c);
        } 
    }
    cout << s.size() << '\n';
    
    return 0;
}