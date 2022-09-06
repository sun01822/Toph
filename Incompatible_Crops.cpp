#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int R, C, count=0;
    char c[26][26];
    cin >> R >> C;
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            cin >> c[i][j];
        }
    }

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            if(c[i][j]=='.')
            {
                if(c[i-1][j]!='*' && c[i+1][j]!='*' && c[i][j-1] != '*' && c[i][j+1]!= '*')
                    count++;
            }
        }
    }

    cout << count << '\n';

    return 0;
}

