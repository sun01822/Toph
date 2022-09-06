#include<bits/stdc++.h>
using namespace std;

#define ll long long

void myfunc(string s)
{
    vector<char> v;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==s[i+1]) 
        {
            continue;
        }   
        else
            v.push_back(s[i]);   
    }

    for(auto i: v)
        cout << i;
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll N;
    string s;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        getline(cin>>ws, s);
        myfunc(s);
    }
    return 0;
}