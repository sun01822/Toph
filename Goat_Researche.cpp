#include<bits/stdc++.h>
using namespace std;

#define ll long long
string center(string input, int width) 
{ 
    return string((width - input.length()) / 2, ' ') + input;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int N, count=0;
    string s;
    vector<string> v;
    int max=0;
    cin >> N;
    while (N--)
    {
        count=0;
        cin >> s;
        int len = s.length();
        for(int i=0; i<len; i++)
        {
            if(s[i] == 'a')
                count++;
        }
        
        if(count%2)
            s.erase(s.length()-1, 1);
        int len2 = s.length();
        if(max < len2)
            max = len2;
        v.push_back(s); 
    }

    for(auto i: v)
    {
        cout << center(i,max) << '\n';
    }
    return 0;
}