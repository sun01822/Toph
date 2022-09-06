#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int N;
    string s, new_s;
    cin >> N;
    while(N--)
    {
        cin >> s;
        new_s+=s;
    }   
    cout << new_s << '\n';
    return 0;
}