#include <bits/stdc++.h>
using namespace std;

void myfunc(int N)
{
    string s;
    int count=0;

    s = to_string(N);

    for(int i=s.length()-1; i>=1; i--)
    {
        if(s[i] > s[i-1] && count < 3)
        {
            swap(s[i], s[i-1]);
            count++;
        }
    }

    for(int i=0; i<s.length(); i++)
        cout << s[i];
    cout << '\n';
}

int main()
{
    int t, N;

    cin >> t;
    
    while(t--)
    {
        cin >> N;
        myfunc(N);
    }

    return 0;
}